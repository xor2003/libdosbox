/*
 *  Copyright (C) 2002-2021  The DOSBox Team
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

#ifndef DOSBOX_ZMBV_H
#define DOSBOX_ZMBV_H

#ifndef DOSBOX_DOSBOX_H
	#ifdef _MSC_VER
		#define INLINE __forceinline
	#else
		#define INLINE inline
	#endif
#else
	#define INLINE inline
#endif

#include <zlib.h>

#define CODEC_4CC "ZMBV"

enum class ZMBV_FORMAT {
	NONE = 0x00,
	BPP_1 = 0x01,
	BPP_2 = 0x02,
	BPP_4 = 0x03,
	BPP_8 = 0x04,
	BPP_15 = 0x05,
	BPP_16 = 0x06,
	BPP_24 = 0x07,
	BPP_32 = 0x08,
};

void Msg(const char fmt[], ...);
class VideoCodec {
private:
	struct FrameBlock {
		int start;
		int dx,dy;
	};
	struct CodecVector {
		int x,y;
		int slot;
	};
	struct KeyframeHeader {
		unsigned char high_version;
		unsigned char low_version;
		unsigned char compression;
		unsigned char format;
		unsigned char blockwidth,blockheight;
	};

	struct {
		int		linesDone;
		int		writeSize;
		int		writeDone;
		unsigned char	*writeBuf;
	} compress;

	CodecVector VectorTable[512];
	int VectorCount;

	unsigned char *oldframe, *newframe;
	unsigned char *buf1, *buf2, *work;
	int bufsize;

	int blockcount; 
	FrameBlock * blocks;

	int workUsed, workPos;

	int palsize;
	char palette[256*4];
	int height, width, pitch;
	ZMBV_FORMAT format;
	int pixelsize;

	z_stream zstream;

	// methods
	void FreeBuffers(void);
	void CreateVectorTable(void);
	bool SetupBuffers(ZMBV_FORMAT format, int blockwidth, int blockheight);

	template<class P>
		void AddXorFrame(void);
	template<class P>
		void UnXorFrame(void);
	template<class P>
		INLINE int PossibleBlock(int vx,int vy,FrameBlock * block);
	template<class P>
		INLINE int CompareBlock(int vx,int vy,FrameBlock * block);
	template<class P>
		INLINE void AddXorBlock(int vx,int vy,FrameBlock * block);
	template<class P>
		INLINE void UnXorBlock(int vx,int vy,FrameBlock * block);
	template<class P>
		INLINE void CopyBlock(int vx, int vy,FrameBlock * block);
public:
	VideoCodec();
	~VideoCodec();

	VideoCodec(const VideoCodec&) = delete; // prevent copy
	VideoCodec &operator=(const VideoCodec&) = delete; // prevent assignment

	bool SetupCompress( int _width, int _height);
	bool SetupDecompress( int _width, int _height);
	ZMBV_FORMAT BPPFormat( int bpp );
	int NeededSize( int _width, int _height, ZMBV_FORMAT _format);

	void CompressLines(int lineCount, void *lineData[]);
	bool PrepareCompressFrame(int flags,  ZMBV_FORMAT _format, char * pal, void *writeBuf, int writeSize);
	int FinishCompressFrame( void );
	bool DecompressFrame(void * framedata, int size);
	void Output_UpsideDown_24(void * output);
};

#endif

