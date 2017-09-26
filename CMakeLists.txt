cmake_minimum_required( VERSION 2.6 )
set( CMAKE_CXX_STANDARD 11 )

add_definitions( -D_VARIADIC_MAX=10 )
add_definitions( -D_DEBUG )
add_definitions( -D_MT )
add_definitions( -D_DLL )


# gtest
add_subdirectory( gtest )
include_directories( ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} )

# exceptions
add_subdirectory( exceptions )
include_directories( ${exceptions_SOURCE_DIR} )

# tape
add_subdirectory( tape )
include_directories( ${tape_SOURCE_DIR} tape )

# alphabet
add_subdirectory( alphabet )
include_directories( ${alphabet_SOURCE_DIR} )

# command
add_subdirectory( command )
include_directories( ${command_SOURCE_DIR} )

# command_set
add_subdirectory( command_set )
include_directories( ${command_set_SOURCE_DIR} )

# machine
add_subdirectory( machine )
include_directories( ${machine_SOURCE_DIR} )

# unit_tests
add_subdirectory( unit_tests )

# main
add_subdirectory( main )
include_directories( ${main_SOURCE_DIR} )

# execute_process( COMMAND cmake --build . )
