#include "tape.h"
// #include <fstream>
// #include <iostream>

const char Tape::S_SPACE = '_';

// --------------- Constr., destr. ---------------

Tape::Tape() {

}

Tape::Tape( const char* file ) : mHeadPos( 0 ) {
    std::ifstream infile( file );
    std::getline( infile, mTape );
    infile.close();
}

Tape::Tape( const Tape& tape ) :
    mTape( tape.mTape ),
    mHeadPos( tape.mHeadPos ) {}

// --------------- Private methods ----------------

void Tape::lengthenTape() {
    if( mHeadPos == mTape.length() ) {
        mTape.append( 1, S_SPACE );
    } else if( mHeadPos == -1 ) {
        mTape.insert( 0, 1, S_SPACE );
        mHeadPos = 0;
    }
}

// ---------------- Public methods ----------------

void Tape::moveHead( int direction ) {
    switch( direction ) {
    case -1:
        mHeadPos--;
        break;
    case 1:
        mHeadPos++;
        break;
    }
    lengthenTape();
}

void Tape::typeSymb( char symb ) {
    mTape[mHeadPos] = symb;
}

char Tape::getSymb() const {
    return mTape[mHeadPos];
}

const std::string& Tape::getTape() const {
    return mTape;
}

const Tape Tape::operator=( const Tape& tape ) {
    mTape = tape.mTape;
    mHeadPos = tape.mHeadPos;
    return *this;
}

int Tape::getHeadPos() const {
    return mHeadPos;
}
