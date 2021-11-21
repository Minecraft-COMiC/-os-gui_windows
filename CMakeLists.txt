cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)

add_library(
        __COMiC_os-gui_windows
        SHARED

        ../os-gui.def

        src/main.c
)

target_link_libraries(__COMiC_os-gui_windows PUBLIC COMiC::os-gui::_include)
target_include_directories(__COMiC_os-gui_windows PUBLIC include)
set_target_properties(__COMiC_os-gui_windows PROPERTIES LINKER_LANGUAGE C)

if (${WIN32})
    set_target_properties(__COMiC_os-gui_windows PROPERTIES OUTPUT_NAME os-gui)
    install(
            TARGETS __COMiC_os-gui_windows
            ARCHIVE DESTINATION ./lib
            LIBRARY DESTINATION ./
            RUNTIME DESTINATION ./
            PUBLIC_HEADER DESTINATION ./include
    )
    add_library(COMiC::os-gui ALIAS __COMiC_os-gui_windows)
endif ()
