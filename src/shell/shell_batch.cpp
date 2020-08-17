/*
 *  Copyright (C) 2002-2020  The DOSBox Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <climits>
#include <stdlib.h>
#include <string.h>

#include "shell.h"
#include "support.h"

BatchFile::BatchFile(DOS_Shell *host,
                     char const * const resolved_name,
                     char const * const entered_name,
                     char const * const cmd_line)
	: file_handle(0),
	  location(0),
	  echo(host->echo),
	  shell(host),
	  prev(host->bf),
	  cmd(new CommandLine(entered_name, cmd_line)),
	  filename("")
{
	char totalname[DOS_PATHLENGTH+4];
	DOS_Canonicalize(resolved_name,totalname); // Get fullname including drive specificiation
	filename = totalname;
	// Test if file is openable
	if (!DOS_OpenFile(totalname,(DOS_NOT_INHERIT|OPEN_READ),&file_handle)) {
		//TODO Come up with something better
		E_Exit("SHELL:Can't open BatchFile %s",totalname);
	}
	DOS_CloseFile(file_handle);
}

BatchFile::~BatchFile() {
	delete cmd;
	shell->bf=prev;
	shell->echo=echo;
}

bool BatchFile::ReadLine(char * line) {
	//Open the batchfile and seek to stored postion
	if (!DOS_OpenFile(filename.c_str(),(DOS_NOT_INHERIT|OPEN_READ),&file_handle)) {
		LOG(LOG_MISC,LOG_ERROR)("ReadLine Can't open BatchFile %s",filename.c_str());
		delete this;
		return false;
	}
	DOS_SeekFile(file_handle,&(this->location),DOS_SEEK_SET);

	uint16_t bytes_read = 1;
	uint8_t data = 0;
	char val = 0;
	char temp[CMD_MAXLINE] = "";
emptyline:
	char * cmd_write=temp;
	do {
		bytes_read = 1;
		DOS_ReadFile(file_handle, &data, &bytes_read);

		// Allow the full 0-255 range to wrap into the char
		assert(data <= UINT8_MAX);
		val = static_cast<char>(data);

		if (bytes_read > 0) {
			/* Why are we filtering this ?
			 * Exclusion list: tab for batch files
			 * escape for ansi
			 * backspace for alien odyssey */
			if (val > 31 || val == 0x1b || val == '\t' || val == 8) {
				//Only add it if room for it (and trailing zero) in the buffer, but do the check here instead at the end
				//So we continue reading till EOL/EOF
				if (cmd_write - temp + 1 < CMD_MAXLINE - 1) {
					*cmd_write++ = val;
				}
			} else if (val != '\n' && val != '\r') {
				shell->WriteOut(MSG_Get("SHELL_ILLEGAL_CONTROL_CHARACTER"),
				                val, val);
			}
		}
	} while (val != '\n' && bytes_read);
	*cmd_write=0;
	if (!bytes_read && cmd_write == temp) {
		//Close file and delete bat file
		DOS_CloseFile(file_handle);
		delete this;
		return false;
	}
	if (!strlen(temp)) goto emptyline;
	if (temp[0]==':') goto emptyline;

	/* Now parse the line read from the bat file for % stuff */
	cmd_write=line;
	char * cmd_read=temp;
	while (*cmd_read) {
		if (*cmd_read == '%') {
			cmd_read++;
			if (cmd_read[0] == '%') {
				cmd_read++;
				if (((cmd_write - line) + 1) < (CMD_MAXLINE - 1))
					*cmd_write++ = '%';
				continue;
			}
			if (cmd_read[0] == '0') {  /* Handle %0 */
				const char *file_name = cmd->GetFileName();
				cmd_read++;
				size_t name_len = strlen(file_name);
				if (((cmd_write - line) + name_len) < (CMD_MAXLINE - 1)) {
					strcpy(cmd_write,file_name);
					cmd_write += name_len;
				}
				continue;
			}
			char next = cmd_read[0];
			if(next > '0' && next <= '9') {
				/* Handle %1 %2 .. %9 */
				cmd_read++; //Progress reader
				next -= '0';
				if (cmd->GetCount()<(unsigned int)next) continue;
				std::string word;
				if (!cmd->FindCommand(next,word)) continue;
				size_t name_len = strlen(word.c_str());
				if (((cmd_write - line) + name_len) < (CMD_MAXLINE - 1)) {
					strcpy(cmd_write,word.c_str());
					cmd_write += name_len;
				}
				continue;
			} else {
				/* Not a command line number has to be an environment */
				char * first = strchr(cmd_read,'%');
				/* No env afterall. Ignore a single % */
				if (!first) {/* *cmd_write++ = '%';*/continue;}
				*first++ = 0;
				std::string env;
				if (shell->GetEnvStr(cmd_read,env)) {
					const char* equals = strchr(env.c_str(),'=');
					if (!equals) continue;
					equals++;
					size_t name_len = strlen(equals);
					if (((cmd_write - line) + name_len) < (CMD_MAXLINE - 1)) {
						strcpy(cmd_write,equals);
						cmd_write += name_len;
					}
				}
				cmd_read = first;
			}
		} else {
			if (((cmd_write - line) + 1) < (CMD_MAXLINE - 1))
				*cmd_write++ = *cmd_read++;
		}
	}
	*cmd_write = 0;
	//Store current location and close bat file
	this->location = 0;
	DOS_SeekFile(file_handle,&(this->location),DOS_SEEK_CUR);
	DOS_CloseFile(file_handle);
	return true;	
}

// TODO: Refactor this sprawling function into smaller ones without GOTOs
bool BatchFile::Goto(char * where) {
	//Open bat file and search for the where string
	if (!DOS_OpenFile(filename.c_str(),(DOS_NOT_INHERIT|OPEN_READ),&file_handle)) {
		LOG(LOG_MISC,LOG_ERROR)("SHELL:Goto Can't open BatchFile %s",filename.c_str());
		delete this;
		return false;
	}

	char cmd_buffer[CMD_MAXLINE] = "";
	char *cmd_write = nullptr;

	/* Scan till we have a match or return false */
	uint16_t bytes_read = 1;
	uint8_t data = 0;
	char val = 0;
again:
	cmd_write=cmd_buffer;
	do {
		bytes_read = 1;
		DOS_ReadFile(file_handle, &data, &bytes_read);
		assert(data <= CHAR_MAX);
		val = static_cast<char>(data);
		if (bytes_read > 0) {
			if (val > 31) {
				if (cmd_write - cmd_buffer + 1 < CMD_MAXLINE - 1) {
					*cmd_write++ = val;
				}
			} else if (val != '\n' && val != '\r') {
				shell->WriteOut(MSG_Get("SHELL_ILLEGAL_CONTROL_CHARACTER"),
				                val, val);
			}
		}
	} while (val != '\n' && bytes_read);
	*cmd_write++ = 0;
	char *nospace = trim(cmd_buffer);
	if (nospace[0] == ':') {
		nospace++; //Skip :
		//Strip spaces and = from it.
		while(*nospace && (isspace(*reinterpret_cast<unsigned char*>(nospace)) || (*nospace == '=')))
			nospace++;

		//label is until space/=/eol
		char* const beginlabel = nospace;
		while(*nospace && !isspace(*reinterpret_cast<unsigned char*>(nospace)) && (*nospace != '=')) 
			nospace++;

		*nospace = 0;
		if (strcasecmp(beginlabel,where)==0) {
		//Found it! Store location and continue
			this->location = 0;
			DOS_SeekFile(file_handle,&(this->location),DOS_SEEK_CUR);
			DOS_CloseFile(file_handle);
			return true;
		}
	   
	}
	if (!bytes_read) {
		DOS_CloseFile(file_handle);
		delete this;
		return false;
	}
	goto again;
	return false;
}

void BatchFile::Shift(void) {
	cmd->Shift(1);
}
