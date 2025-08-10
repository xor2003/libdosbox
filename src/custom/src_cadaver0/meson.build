libsrc_sources = files([
  '_data.cpp',
  'cfix.exe.cpp',
  'cfix.exe_default_seg.cpp',
  'cfix.exe_seg000.cpp',
  'cfix.exe_seg001.cpp',
  'cfix.exe_seg008.cpp',
  'cfix.exe_seg015.cpp',
  'init.cpp'
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
