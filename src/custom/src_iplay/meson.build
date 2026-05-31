libsrc_sources = files([
  'iplay.cpp','iplay_default_seg.cpp','iplay_seg000.cpp','iplay_seg001.cpp',
  'init.cpp',
  '_data.cpp',
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
