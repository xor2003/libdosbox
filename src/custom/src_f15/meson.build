libsrc_sources = files([
  '_data.cpp',
  'f.exe.cpp',
  'f.exe_default_seg.cpp',
  'f.exe_seg000.cpp',
  'f.exe_seg001.cpp',
  'f.exe_seg004.cpp',
  'f.exe_seg127c.cpp',
  'f.exe_seg13dd.cpp',
  'f.exe_seg1667.cpp',
  'f.exe_seg2623.cpp',
  'f.exe_seg35ab.cpp',
  'f.exe_seg37ca.cpp',
  'f.exe_seg3897.cpp',
  'f.exe_seg48ae.cpp',
  'init.cpp'
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
