libsrc_sources = files([
  'init.cpp',
  '_data.cpp',
'game_drv_.cpp',
'game_drv__default_seg.cpp',
'game_drv__seg000.cpp',
'game_drv__seg001.cpp',
'game_drv__seg002.cpp',
'game_drv__seg003.cpp',
'game_drv__seg004.cpp',
'game_drv__seg005.cpp',
'game_drv__seg006.cpp',
'game_drv__seg007.cpp',
'game_drv__seg008.cpp',
'game_drv__seg009.cpp',
'game_drv__seg010.cpp',
'game_drv__seg011.cpp',
'game_drv__seg012.cpp',
'game_drv__seg013.cpp',
'game_drv__seg014.cpp',
'game_drv__seg015.cpp',
'game_drv__seg016.cpp',
'game_drv__seg017.cpp',
'game_drv__seg018.cpp',
'game_drv__seg019.cpp',
'game_drv__seg020.cpp',
'game_drv__seg021.cpp',
'game_drv__seg022.cpp',
'game_drv__seg023.cpp',
'game_drv__seg024.cpp',
'game_drv__seg025.cpp',
'game_drv__seg026.cpp',
'game_drv__seg027.cpp',
'game_drv__seg028.cpp',
'game_drv__seg029.cpp',
'game_drv__seg030.cpp',
'game_drv__seg031.cpp',
'game_drv__seg032.cpp',
'game_drv__seg033.cpp',
'game_drv__seg034.cpp',
'game_drv__seg035.cpp',
'game_drv__seg036.cpp',
'game_drv__seg037.cpp',
'game_drv__seg041.cpp'
])

libsrc = static_library('src', libsrc_sources,
                        include_directories : incdir,
                        dependencies : [ libloguru_dep
                                       ])

libsrc_dep = declare_dependency(link_with : libsrc)

internal_deps += libsrc_dep

