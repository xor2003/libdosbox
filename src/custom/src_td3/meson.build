libsrc_sources = files([
'tdiii.cpp', 'tdiii_default_seg.cpp', 'tdiii_seg000.cpp', 'tdiii_seg001.cpp', 'tdiii_seg002.cpp', 'tdiii_seg003.cpp', 'tdiii_seg004.cpp', 'tdiii_seg005.cpp', 'tdiii_seg006.cpp', 'tdiii_seg007.cpp', 'tdiii_seg008.cpp', 'tdiii_seg009.cpp', 'tdiii_seg010.cpp', 'tdiii_seg011.cpp', 'tdiii_seg012.cpp', 'tdiii_seg013.cpp', 'tdiii_seg014.cpp', 'tdiii_seg015.cpp', 'tdiii_seg016.cpp', 'tdiii_seg017.cpp', 'tdiii_seg018.cpp', 'tdiii_seg019.cpp', 'tdiii_seg020.cpp', 'tdiii_seg021.cpp', 'tdiii_seg022.cpp', 'tdiii_seg023.cpp', 'tdiii_seg024.cpp', 'tdiii_seg025.cpp', 'tdiii_seg026.cpp', 'tdiii_seg027.cpp', 'tdiii_seg028.cpp', 'tdiii_seg029.cpp', 'tdiii_seg030.cpp', 'tdiii_seg031.cpp', 'tdiii_seg032.cpp', 'tdiii_seg033.cpp', 'tdiii_seg034.cpp', 'tdiii_seg035.cpp', 'tdiii_seg036.cpp', 'tdiii_seg037.cpp', 'tdiii_seg038.cpp', 'tdiii_seg039.cpp',
  'init.cpp',
  '_data.cpp',
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep
