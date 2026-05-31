libsrc_sources = files([
  'vikings.exe.cpp', 'vikings.exe_default_seg.cpp',  'vikings.exe_seg000.cpp',  'vikings.exe_seg002.cpp',  'vikings.exe_seg003.cpp',
  'init.cpp',
  '_data.cpp',
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
