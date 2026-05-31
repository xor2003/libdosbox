libsrc_sources = files([
  'dnprgdrv.cpp',
  'dnprgdrv_default_seg.cpp',
  'dnprgdrv_seg000.cpp',
  'dnprgdrv_seg002.cpp',
  'dnprgdrv_seg003.cpp',
  'dnprgdrv_seg005.cpp',
  'init.cpp',
  '_data.cpp',
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
