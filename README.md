# DOSBox Staging

![GPL-2.0-or-later][gpl-badge]
[![Chat][discord-badge]][discord]

This repository attempts to modernize the DOSBox codebase by using current
development practices and tools, fixing issues, and adding features that better
support today's systems.


## Build status

[![Linux x86\_64 build status][build-lin1-badge]][build-lin1-ci]
[![Linux other build status][build-lin2-badge]][build-lin2-ci]
[![Windows (VisualStudio) build status][build-win-msvc-badge]][build-win-msvc-ci]
[![Windows (MSYS2) build status][build-win-msys2-badge]][build-win-msys2-ci]
[![macOS build status][build-mac-badge]][build-mac-ci]


## Stable release builds

[Linux](https://www.dosbox-staging.org/releases/linux/),
[Windows](https://www.dosbox-staging.org/releases/windows/),
[macOS](https://www.dosbox-staging.org/releases/macos/)

## Test builds & development snapshots

[Development builds].

## Key features for developers

| **Feature**                    | **Status**                   |
|--------------------------------|------------------------------|
| **Version control**            | Git                          |
| **Language**                   | C++20                        |
| **SDL**                        | >= 2.0.5                     |
| **Logging**                    | Loguru for C++<sup>[5]</sup> |
| **Buildsystem**                | Meson or Visual Studio 2022  |
| **CI**                         | Yes                          |
| **Static analysis**            | Yes<sup>[1],[3],[4]</sup>    |
| **Dynamic analysis**           | Yes                          |
| **clang-format**               | Yes                          |
| **[Development builds]**       | Yes                          |
| **Unit tests**                 | Yes<sup>[6]</sup>            |
| **Automated regression tests** | WIP                          |

[1]: https://github.com/dosbox-staging/dosbox-staging/actions?query=workflow%3A%22Code+analysis%22
[2]: https://lgtm.com/projects/g/dosbox-staging/dosbox-staging/
[4]: https://github.com/dosbox-staging/dosbox-staging/actions?query=workflow%3A%22PVS-Studio+analysis%22
[5]: https://github.com/emilk/loguru
[6]: https://github.com/dosbox-staging/dosbox-staging/tree/main/tests
[Development builds]: https://www.dosbox-staging.org/releases/development-builds/

## Source code analysis tools

- [PVS-Studio](https://pvs-studio.com/pvs-studio/?utm_source=website&utm_medium=github&utm_campaign=open_source) — C++ static analyser
- [Clang Static Analyzer](https://clang-analyzer.llvm.org/) — C++ static analyser
- [Pylint](https://pypi.org/project/pylint/) — Python static analyser
- [markdownlint](https://github.com/DavidAnson/markdownlint) — style checker and linter for Markdown
- [ShellCheck](https://www.shellcheck.net/) — shell script analysis tool

## Dependencies

DOSBox Staging has the following library dependencies:

| Package                                                            | Lib name      | Provides feature                                        | Presence    | Meson wrap   | VCPKG   | Repo availability   |
| ------------------------------------------------------------------ | ------------- | ------------------------------------------------------- | ----------- | ------------ | ------- | ------------------- |
| [FluidSynth](https://www.fluidsynth.org/)                          | fluidsynth    | General MIDI playback                                   | Optional    | yes          | yes     | common              |
| [Google Test+Mock](https://github.com/google/googletest)           | gmock         | Framework for unit testing (development)                | Optional    | yes          | yes     | common              |
| [IIR](https://github.com/berndporr/iir1)                           | iir1          | Audio filtering                                         | Mandatory   | yes          | yes     | rare                |
| [libpng](http://www.libpng.org/pub/png/libpng.html)                | libpng        | PNG-encoding of screen captures                         | Optional    | yes          | yes     | very common         |
| [Munt](https://github.com/munt/munt)                               | libmt32emu    | Roland MT-32 and CM-32L playback                        | Optional    | yes          | yes     | rare                |
| [Opus File](https://opus-codec.org/)                               | opusfile      | CDDA playback for Opus-encoded track files              | Mandatory   | **no** 🔴    | yes     | common              |
| [SDL 2.0](https://github.com/libsdl-org/SDL)                       | sdl2          | OS-agnostic API for video, audio, and eventing          | Mandatory   | yes          | yes     | common              |
| [SDL_net 2.0](https://github.com/libsdl-org/SDL_net)               | sdl2-net      | Network API for emulated serial and IPX                 | Optional    | yes          | yes     | common              |
| [slirp](https://gitlab.freedesktop.org/slirp)                      | libslirp      | Unprivileged virtual TCP/IP stack for Ethernet          | Optional    | yes          | yes     | less common         |
| [SpeexDSP](https://github.com/xiph/speexdsp)                       | speexdsp      | Audio resampling                                        | Mandatory   | yes          | yes     | common              |
| [Tracy Profiler](https://github.com/wolfpld/tracy)                 | tracy         | Event profile (development)                             | Optional    | yes          | yes     | rare                |
| [zlib](http://www.zlib.net/)                                       | zlib          | ZMBV video capture                                      | Optional    | **no** 🔴    | yes     | very common         |
| [zlib-ng](https://github.com/zlib-ng/zlib-ng)                      | zlib-ng       | ZMBV video capture (more performant zlib replacement)   | Optional    | yes          | yes     | common              |

See the Meson wrap files in [subprojects](/subprojects) the current library versions we use.

## Get the sources

Clone the repository (one-time step):

``` shell
git clone https://github.com/dosbox-staging/dosbox-staging.git
```

## Build instructions

Read [BUILD.md] for the comprehensive compilation guide.

> **Note**
>
> CMake support is currently an experimental internal-only, work-in-progress
> feature; it's not ready for public consumption yet. Please ignore the
> `CMakeLists.txt` files in the source tree.


### Linux, macOS

Install build dependencies appropriate for your OS:

``` shell
# Fedora
sudo dnf install ccache gcc-c++ meson alsa-lib-devel libatomic libpng-devel \
                 SDL2-devel SDL2_net-devel opusfile-devel \
                 fluidsynth-devel iir1-devel mt32emu-devel libslirp-devel \
                 speexdsp-devel libXi-devel zlib-ng-devel
```

``` shell
# Debian, Ubuntu
sudo apt install ccache build-essential libasound2-dev libatomic1 libpng-dev \
                 libsdl2-dev libsdl2-net-dev libopusfile-dev \
                 libfluidsynth-dev libslirp-dev libspeexdsp-dev libxi-dev

# Install Meson on Debian-11 "Bullseye" or Ubuntu-21.04 and newer
sudo apt install meson
```

``` shell
# Arch, Manjaro
sudo pacman -S ccache gcc meson alsa-lib libpng sdl2 sdl2_net \
               opusfile fluidsynth libslirp speexdsp libxi pkgconf
```

``` shell
# openSUSE
sudo zypper install ccache gcc gcc-c++ meson alsa-devel libatomic1 libpng-devel \
                    libSDL2-devel libSDL2_net-devel \
                    opusfile-devel fluidsynth-devel libmt32emu-devel libslirp-devel \
                    speexdsp libXi-devel
```

``` shell
# Void Linux
sudo xbps-install -S SDL2-devel SDL2_net-devel alsa-lib-devel \
                     fluidsynth-devel libiir1-devel libmt32emu-devel \
                     libpng-devel libslirp-devel opusfile-devel \
                     speexdsp-devel libatomic-devel libXi-devel
```

``` shell
# NixOS
# With Home Manager on home.nix (Recommended Permanent Installation)
home.packages = [ pkg-config gcc_multi cmake ccache SDL2 SDL2_net \
                  fluidsynth glib gtest libGL libGLU libjack2 libmt32emu libogg \
                  libpng libpulseaudio libslirp libsndfile meson ninja opusfile \
                  libselinux speexdsp stdenv alsa-lib xorg.libXi irr1 ]

# Note: the same package list will work with environment.systemPackages
# on configuration.nix
```

``` shell
# macOS
xcode-select --install
brew install cmake ccache meson libpng sdl2 sdl2_net opusfile \
     fluid-synth libslirp pkg-config python3 speexdsp
```

### Build and stay up-to-date with the latest sources

1. Check out the main branch:

    ``` shell
    # commit or stash any personal code changes
    git checkout main -f
    ```

2. Pull the latest updates. This is necessary every time you want a new build:

    ``` shell
    git pull
    ```

3. Set up the build. This is a one-time step either after cloning the repo or
    cleaning your working directories:

    ``` shell
    meson setup build
    ```

    The above enables all of DOSBox Staging's functional features. If you're
    interested in seeing all of Meson's setup options, run `meson configure`.

4. Compile the sources. This is necessary every time you want a new build:

    ``` shell
    meson compile -C build
    ```

    Your binary is: `build/dosbox`

    The binary depends on local resources relative to it, so we suggest
    symlinking to the binary from your `PATH`, such as into `~/.local/bin/`.

    Have fun!


### Windows – Visual Studio (2022 or newer)

First, you need to setup [vcpkg] to install build dependencies. Once vcpkg
is bootstrapped, open PowerShell and run:

``` powershell
PS:\> .\vcpkg integrate install
```

This step will ensure that MSVC can use vcpkg to build, find and links all
dependencies.

Start Visual Studio and open the file `vs\dosbox.sln`. Make sure you have
`x64` selected as the solution platform.  Use **Ctrl+Shift+B** to build all
projects.

Note, the first time you build a configuration, dependencies will be built
automatically and stored in the `vcpkg_installed` directory. This can take
a significant length of time.

[vcpkg]: https://github.com/microsoft/vcpkg


### Windows (MSYS2), macOS (MacPorts), Haiku, Nix0S, others

Instructions for other build systems and operating systems are documented
in [BUILD.md].

Links to OS-specific instructions: [MSYS2], [MacPorts], [Haiku], [NixOS].

[BUILD.md]: BUILD.md
[MSYS2]:    docs/build-windows.md
[MacPorts]: docs/build-macos.md
[Haiku]:    docs/build-haiku.md
[NixOS]:    docs/build-nix.md


## Imported branches, community patches, old forks

Upstream commits are imported to this repo in a timely manner,
see branch [`svn/trunk`].

- [`svn/*`] - branches from SVN
- [`forks/*`] - code for various abandoned DOSBox forks
- [`vogons/*`] - community patches posted on the Vogons forum

Git tags matching pattern `svn/*` are pointing to the commits referenced by SVN
"tag" paths at the time of creation.

Additionally, we attach some optional metadata to the commits in the form of
[Git notes][git-notes]. To fetch them, run:

``` shell
git fetch origin "refs/notes/*:refs/notes/*"
```

[`svn/*`]:     https://github.com/dosbox-staging/dosbox-staging/branches/all?utf8=%E2%9C%93&query=svn%2F
[`svn/trunk`]: https://github.com/dosbox-staging/dosbox-staging/tree/svn/trunk
[`vogons/*`]:  https://github.com/dosbox-staging/dosbox-staging/branches/all?utf8=%E2%9C%93&query=vogons%2F
[`forks/*`]:   https://github.com/dosbox-staging/dosbox-staging/branches/all?utf8=%E2%9C%93&query=forks%2F
[git-notes]:   https://git-scm.com/docs/git-notes

[gpl-badge]:     https://img.shields.io/badge/license-GPL--2.0--or--later-blue
[discord-badge]: https://img.shields.io/discord/514567252864008206?color=%237289da&logo=discord&logoColor=white&label=discord
[discord]:       https://discord.gg/WwAg3Xf

[build-lin1-badge]: https://img.shields.io/github/actions/workflow/status/dosbox-staging/dosbox-staging/linux.yml?label=Linux%20%28x86_64%29
[build-lin1-ci]:    https://github.com/dosbox-staging/dosbox-staging/actions/workflows/linux.yml?query=branch%3Amain

[build-lin2-badge]: https://img.shields.io/github/actions/workflow/status/dosbox-staging/dosbox-staging/platforms.yml?label=Linux%20%28other%29
[build-lin2-ci]:    https://github.com/dosbox-staging/dosbox-staging/actions/workflows/platforms.yml?query=branch%3Amain

[build-win-msys2-badge]: https://img.shields.io/github/actions/workflow/status/dosbox-staging/dosbox-staging/windows-msys2.yml?label=Windows%20%28MSYS2%29
[build-win-msys2-ci]:    https://github.com/dosbox-staging/dosbox-staging/actions/workflows/windows-msys2.yml?query=branch%3Amain

[build-win-msvc-badge]: https://img.shields.io/github/actions/workflow/status/dosbox-staging/dosbox-staging/windows-msvc.yml?label=Windows%20%28Visual%20Studio%29
[build-win-msvc-ci]:    https://github.com/dosbox-staging/dosbox-staging/actions/workflows/windows-msvc.yml?query=branch%3Amain

[build-mac-badge]: https://img.shields.io/github/actions/workflow/status/dosbox-staging/dosbox-staging/macos.yml?label=macOS%20%28x86_64%2C%20arm64%29
[build-mac-ci]:    https://github.com/dosbox-staging/dosbox-staging/actions/workflows/macos.yml?query=branch%3Amain


## Website & documentation

Please refer to the [documentation guide](DOCUMENTATION.md) before making
changes to the website or the documentation.

## DOSBox Hook Map (for upstream rebases or raw DOSBox ports)

This section documents all libdosbox integration hooks into DOSBox core code.
Use it to reapply hooks after syncing with upstream `dosbox-staging`, or when porting onto a clean DOSBox tree.

### Upstream baseline (found with git)

- Fork-point (merge-base of this branch vs `upstream/main`):  
  `83e3fa2c034a81aa5547007d74936bd3bed8a6c2`  
  Date: `2021-12-11 17:56:43 +0000`  
  Subject: `Improve BIOS FDD motor timeout counter, most notably for earlier PCs. Fixes a Chinese variant of Space Harrier.`
- First core hook commit in this fork:  
  `4efd2ddf0b1dc36996c40422794576d70ab60f49` (`libdosbox patch`, 2022-03-18)

### Hook inventory (core integration points)

1. Build/system hooks
- [`meson.build:44`](/home/xor/inertia_player/libdosbox/meson.build:44)  
  Adds compile flags: `-DDOSBOX_CUSTOM`, `-DM2CDEBUG=1`, `-D_SHADOW_STACK` and debug-oriented flags.
- [`meson.build:402`](/home/xor/inertia_player/libdosbox/meson.build:402), [`meson.build:403`](/home/xor/inertia_player/libdosbox/meson.build:403)  
  Adds `src/custom` and `src/custom/src` to build.

2. Public hook interface
- [`include/custom.h:159`](/home/xor/inertia_player/libdosbox/include/custom.h:159)  
  `#if DOSBOX_CUSTOM` guard and prototypes:
  `custom_init`, `custom_init_prog`, `custom_exit_prog`, `custom_callf`.
- This header is included by core files and provides the main extension contract.

3. CPU call interception (far calls)
- [`src/cpu/cpu.cpp:1121`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:1121)  
  In `CPU_CALL`, sets `from_interpreter=true`, calls `custom_callf(selector, offset)`, and if handled, skips original CALL by advancing `IP`.

4. Shadow stack hooks at CPU push/pop
- [`src/cpu/cpu.cpp:142`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:142), [`src/cpu/cpu.cpp:151`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:151), [`src/cpu/cpu.cpp:157`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:157), [`src/cpu/cpu.cpp:166`](/home/xor/inertia_player/libdosbox/src/cpu/cpu.cpp:166)  
  Under `#ifdef SHADOW_STACK`, pushes/pops are mirrored to `m2c::shadow_stack`.

5. Normal interpreter loop hooks
- [`src/dosbox.cpp:157`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:157)  
  Handles deferred custom calls (`defered_custom_call`) by dispatching `custom_callf` and preserving `shadow_stack` skip counters.
- [`src/dosbox.cpp:155`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:155), [`src/dosbox.cpp:170`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:170)  
  `compare_jump` checkpoints via `m2c::Jend()`.

6. DOS program load hook
- [`src/dos/dos_execute.cpp:440`](/home/xor/inertia_player/libdosbox/src/dos/dos_execute.cpp:440)  
  Calls `custom_init_prog(name, loadseg, init_cs, init_ip)` immediately after EXE load context is prepared.

7. Runtime tracing/data collection hooks
- [`src/cpu/core_normal.cpp:171`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal.cpp:171)  
  Compare-mode execution sanity check.
- [`src/cpu/core_normal.cpp:192`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal.cpp:192)  
  Per-instruction `shadow_memory.collect_segs()`.
- [`src/cpu/core_normal/prefix_none.h:1127`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1127), [`src/cpu/core_normal/prefix_none.h:1137`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1137), [`src/cpu/core_normal/prefix_none.h:1151`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1151), [`src/cpu/core_normal/prefix_none.h:1160`](/home/xor/inertia_player/libdosbox/src/cpu/core_normal/prefix_none.h:1160)  
  Collects call/jump cross-targets.
- [`include/paging.h:265`](/home/xor/inertia_player/libdosbox/include/paging.h:265) (and all read/write variants through line 374)  
  Collects memory access metadata via `shadow_memory.collect_data(...)` when `collect_rt_info_vars` is enabled.

8. DOSBox startup registration hook
- [`src/dosbox.cpp:999`](/home/xor/inertia_player/libdosbox/src/dosbox.cpp:999)  
  Registers `custom_init` section init hook under `#if DOSBOX_CUSTOM`.

### Reapply procedure after updating from upstream

1. Sync upstream and create a port branch.
- `git fetch upstream`
- `git checkout -b reapply-libdosbox-hooks upstream/main`

2. Recreate hook API and custom module tree first.
- Re-add `include/custom.h`.
- Re-add `src/custom/**` (including `src/custom/src/**` and its `meson.build`).

3. Reapply the core hook hunks in this order (to reduce conflicts).
- `meson.build` (`DOSBOX_CUSTOM` flags + `subdir('src/custom')`).
- `src/dosbox.cpp` (`custom_init` registration + deferred call handling in loop).
- `src/dos/dos_execute.cpp` (`custom_init_prog(...)` call).
- `src/cpu/cpu.cpp` (`CPU_CALL` interception + SHADOW_STACK push/pop hooks).
- `src/cpu/core_normal.cpp` and `src/cpu/core_normal/prefix_none.h` (trace/jump collectors).
- `include/paging.h` (memory access collectors).

4. Build-time validation.
- Ensure compile defines include: `DOSBOX_CUSTOM`, `M2CDEBUG`, and `SHADOW_STACK`.
- Build and verify `custom_init`, `custom_callf`, `custom_init_prog` link correctly.

5. Runtime smoke test.
- Start a small DOS EXE and verify:
  - `custom_init_prog` is hit once at load.
  - `custom_callf` is entered for far calls.
  - no crash in `Normal_Loop` deferred-call path.

### Fast git commands for extracting hook deltas

- Show edits around key hooks:
  - `git blame -L 1116,1136 src/cpu/cpu.cpp`
  - `git blame -L 150,171 src/dosbox.cpp`
  - `git blame -L 430,445 src/dos/dos_execute.cpp`
  - `git blame -L 262,375 include/paging.h`
- Build a focused patch bundle:
  - `git diff upstream/main -- meson.build include/custom.h src/dosbox.cpp src/dos/dos_execute.cpp src/cpu/cpu.cpp src/cpu/core_normal.cpp src/cpu/core_normal/prefix_none.h include/paging.h src/custom > libdosbox-hooks.patch`

## Custom Runtime Modes (Profiles and Toggles)

`src/custom/custom.cpp` registers runtime mode controls via mapper hotkeys.

### Profiles

- `Ctrl+F3`: cycle profile (`analysis -> tracing -> compare -> collect_only`)
- `Ctrl+F4`: set `analysis`
- `Ctrl+F5`: set `tracing`
- `Ctrl+F6`: set `compare`

### Per-option toggles

- `Ctrl+1`: toggle `compare_mode`
- `Ctrl+2`: toggle `trace_instructions`
- `Ctrl+3`: toggle `trace_instructions_to_stdout`
- `Ctrl+4`: toggle `collect_rt_info`
- `Ctrl+5`: toggle `collect_rt_info_vars`
- `Ctrl+6`: toggle `complex_self_modifications`

### Order / precedence

- Profiles and toggles are combined.
- The last action wins.
- Setting a profile rewrites the whole option set.
- After choosing a profile, you can still fine-tune with per-option toggles.
- Choosing another profile later overrides those manual toggles again.
