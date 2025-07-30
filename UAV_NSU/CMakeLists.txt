cmake_minimum_required(VERSION 3.5)

project(UAV_NSU VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets SerialPort Quick QuickWidgets Location Positioning)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets SerialPort Quick QuickWidgets Location Positioning)

file(GLOB WORKER_DRONE_SOURCES
    "Worker/Drone/*.h"
    "Worker/Drone/*.cpp"
)

file(GLOB WORKER_MAVLINK_SOURCES
    "Worker/Mavlink/*.h"
    "Worker/Mavlink/*.cpp"
)

file(GLOB WORKER_GENERATOR_SOURCES
    "Worker/Generator/*.h"
    "Worker/Generator/*.cpp"
)

file(GLOB CIRCLE_SOURCES
    "Circle/*.h"
    "Circle/*.cpp"
)

file(GLOB MISSION_TAB_SOURCES
    "Tabs/Mission/*.h"
    "Tabs/Mission/*.cpp"
)

file(GLOB MAP_TAB_SOURCES
    "Tabs/Map/*.h"
    "Tabs/Map/*.cpp"
)

file(GLOB SETUP_TAB_SOURCES
    "Tabs/Setup/*.h"
    "Tabs/Setup/*.cpp"
)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        MapView.qml
)

set(MAVLINK_DIR "${CMAKE_SOURCE_DIR}/mavlink_flygen_c/")
include_directories(${MAVLINK_DIR})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(UAV_NSU
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        settings.h settings.cpp
        ${WORKER_DRONE_SOURCES}
        ${WORKER_MAVLINK_SOURCES}
        ${WORKER_GENERATOR_SOURCES}
        ${CIRCLE_SOURCES}
        ${MISSION_TAB_SOURCES}
        ${SETUP_TAB_SOURCES}
        ${MAP_TAB_SOURCES}
    )
else()
    if(ANDROID)
        add_library(UAV_NSU SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(UAV_NSU
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(UAV_NSU PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::SerialPort
    Qt${QT_VERSION_MAJOR}::Quick
    Qt${QT_VERSION_MAJOR}::QuickWidgets
    Qt${QT_VERSION_MAJOR}::Location
    Qt${QT_VERSION_MAJOR}::Positioning
)

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.UAV_NSU)
endif()
set_target_properties(UAV_NSU PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS UAV_NSU
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(UAV_NSU)
endif()

qt_add_resources(${PROJECT_NAME} "resources"
    PREFIX "/"
    FILES MapView.qml
)
