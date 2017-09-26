#include "gtest/gtest.h"
#include "alphabet.h"

TEST( isSymbPermissible, a_b_c ) {
    Alphabet alph( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/alphabet.txt" );
    EXPECT_TRUE( alph.isSymbPermissible('a')
        && alph.isSymbPermissible('b')
        && alph.isSymbPermissible('c') );
}

TEST( isSymbPermissible, x ) {
    Alphabet alph( "D:/TemporaryFiles/Turing-Machine/unit_tests/input_files/alphabet.txt" );
    EXPECT_FALSE( alph.isSymbPermissible('x') );
}
