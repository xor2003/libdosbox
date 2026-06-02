add_library(libgui STATIC
		render.cpp
		render_scalers.cpp
		sdl_mapper.cpp
		sdlmain.cpp
		shader_manager.cpp
		titlebar.cpp
)

target_include_directories(libgui PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

find_package(OpenGL REQUIRED)

target_link_libraries(libgui PRIVATE
		$<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
		OpenGL::GL
		iir::iir
)
