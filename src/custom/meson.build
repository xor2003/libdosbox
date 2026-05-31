libcustom_sources = files([
  'custom.cpp',
  'segfault.cpp',
  'shadowstack.cpp',
  'utils.cpp',
  'dumpexe.cpp'
])

libcustom = static_library('custom', libcustom_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libcustom_dep = declare_dependency(link_with : libcustom)

internal_deps += libcustom_dep
