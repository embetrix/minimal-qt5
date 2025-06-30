cmake_minimum_required(VERSION 3.10)
project(minimal-qt5-app)

# Disable automoc
set(CMAKE_AUTOMOC OFF)
set(CMAKE_VERBOSE_MAKEFILE ON)
find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Run moc manually
qt5_wrap_cpp(MOC_SOURCES myobject.h)

# Build
add_executable(minimal-qt5
    main.cpp
    myobject.cpp
    ${MOC_SOURCES}
)
target_link_libraries(minimal-qt5 Qt5::Widgets)
