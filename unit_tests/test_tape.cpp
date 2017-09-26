#include "gtest/gtest.h"
#include "tape.h"
#include <iostream>

TEST( getTape, _ ) {
    Tape tape( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/tape.txt" );
    std::string strTape( tape.getTape() );
    std::cout << "VALUE OF -- tape.getTape(): " << tape.getTape() << std::endl;
    EXPECT_EQ( 0, strTape.compare( "Yes, this is a tape" ) );
}

TEST( moveHead, move_left ) {
    Tape tape( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/tape.txt" );
    tape.moveHead(-1);
    std::cout<< "VALUE OF -- tape.getTape(): " << tape.getTape() << std::endl;
    EXPECT_EQ( 0, tape.getTape().compare("_Yes, this is a tape") );
}

TEST( moveHead, move_right ) {
    Tape tape( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/tape.txt" );
    std::string tapeBaseContent( tape.getTape() );
    for( int i = 0; i < tapeBaseContent.length(); i++ )
        tape.moveHead(1);
    std::cout << "VALUE OF -- tape.getTape(): " << tape.getTape() << std::endl;
    EXPECT_EQ( 0, tape.getTape().compare("Yes, this is a tape_") );
}
