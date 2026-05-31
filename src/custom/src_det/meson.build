libsrc_sources = files([
  'detroit.exe.cpp',
  'detroit.exe_default_seg.cpp',
  'detroit.exe_seg000.cpp',
  'detroit.exe_seg001.cpp',
  'detroit.exe_seg002.cpp',
  'detroit.exe_seg003.cpp',
  'detroit.exe_seg004.cpp',
  'detroit.exe_seg005.cpp',
  'detroit.exe_seg006.cpp',
  'init.cpp',
  '_data.cpp'
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
