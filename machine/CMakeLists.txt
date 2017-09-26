project( machine )
add_library( machine machine.cpp )
target_link_libraries( machine
    tape
    command_set
    alphabet
    exceptions
)
