get_filename_component( TAPE input_files/tape.txt ABSOLUTE )
get_filename_component( ALPH input_files/alphabet.txt ABSOLUTE )
get_filename_component( CMD_SET input_files/cmd_set.txt ABSOLUTE )
get_filename_component( CMD_SET_2 input_files/cmd_set_2.txt ABSOLUTE )

# test_tape
project( test_tape )
configure_file( test_tape.cpp.in ${test_tape_SOURCE_DIR}/test_tape.cpp)
add_executable( test_tape test_tape.cpp )
target_link_libraries( test_tape gtest gtest_main tape )

# alphabet
project( test_alphabet )
configure_file( test_alphabet.cpp.in ${test_alphabet_SOURCE_DIR}/test_alphabet.cpp )
add_executable( test_alphabet test_alphabet.cpp )
target_link_libraries( test_alphabet gtest gtest_main alphabet )

# command_set
project( test_command_set )
configure_file( test_command_set.cpp.in ${test_command_set_SOURCE_DIR}/test_command_set.cpp )
add_executable( test_command_set test_command_set.cpp )
target_link_libraries( test_command_set gtest gtest_main command_set )
