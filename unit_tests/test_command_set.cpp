#include "gtest/gtest.h"
#include "command_set.h"
#include <iostream>

TEST( ErrNoCommand, existent_command ) {
    CommandSet cmdset( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/cmd_set.txt" );
    bool isException = false;
    try {
        cmdset.getCommand( 0, 'b' );
    } catch( TmException& exc ) {
        isException = true;
        std::cout << exc.what() << std::endl;
    }
    EXPECT_FALSE( isException );
}


TEST( ErrNoCommand, nonexistent_command ) {
    CommandSet cmdset( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/cmd_set.txt" );
    bool isException = false;
    try {
        cmdset.getCommand( 3, 'b' );
    } catch( TmException& exc ) {
        isException = true;
        std::cout << exc.what() << std::endl;
    }
    EXPECT_TRUE( isException );
}

TEST( getCommand, correct_answer ) {
    CommandSet cmdset( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/cmd_set.txt" );
    EXPECT_EQ( 1, cmdset.getCommand( 0, 'b' ).stateAfter );
}

TEST( ErrInvalidCommand, invalid_command ) {
    bool isException = false;
    try {
        CommandSet cmdset( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/cmd_set_2.txt" );
    } catch( ErrInvalidCommand& exc ) {
        isException = true;
        std::cout << exc.what() << exc.command << std::endl;
    }
    EXPECT_TRUE( isException);
}
