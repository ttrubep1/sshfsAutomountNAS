project(sshfsAutomountNAS)
cmake_minimum_required(VERSION 2.6)

set(_kde4_uninstall_rule_created TRUE)
find_package(Qt4 REQUIRED)
find_package(KDE4 REQUIRED)


set(COMPILE_FLAGS "-std=gnu++11 -Wall -Wextra -W -Wconversion -Wshadow -Wwrite-strings -Weffc++ -Wstrict-aliasing -pthread -rdynamic -pedantic -fexceptions -O2 -fPIC -fvisibility=hidden")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")

include_directories(${QT_INCLUDES} ${KDE4_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(sshfsAutomountNAS_SRC main.cpp)

add_executable(sshfsAutomountNAS ${sshfsAutomountNAS_SRC})
target_link_libraries(sshfsAutomountNAS ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} ${KDE4_KDECORE_LIBS} ${KDE4_KDEUI_LIBS})