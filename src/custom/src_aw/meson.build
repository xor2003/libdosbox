libsrc_sources = files([
  'vga.exe.cpp',  'vga.exe_default_seg.cpp',  'vga.exe_seg000.cpp',
  'init.cpp',
  '_data.cpp',
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
