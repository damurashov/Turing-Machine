project( command_set )
add_library( command_set command_set.cpp )
target_link_libraries( command_set exceptions command )
