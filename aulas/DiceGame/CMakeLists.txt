cmake_minimum_required(VERSION 3.5.0)
project(dicegame)

#include_directories(include)

# source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# executable
add_executable(${PROJECT_NAME} ${SOURCES})

#For the shared library:
# set ( PROJECT_LINK_LIBS libtestStudent.so )
# link_directories( libdir/lib )

#For the static library:
# set ( PROJECT_LINK_LIBS libtestStudent.a )
# link_directories( libdir/lib )

# include_directories(libdir/include)

# target_link_libraries(libtest ${PROJECT_LINK_LIBS} )

