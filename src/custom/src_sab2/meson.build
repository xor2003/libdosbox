libsrc_sources = files([
  'sab2.cpp', 
  'sab2_default_seg.cpp', 
  'sab2_seg000.cpp', 
  'init.cpp',
  '_data.cpp',
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
