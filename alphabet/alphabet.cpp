#include "alphabet.h"
#include <fstream>
#include <string>

const char Alphabet::S_SPACE = '_';

// ---------------- Constr., destr ----------------

Alphabet::Alphabet() {}

Alphabet::Alphabet( const char* file ) {
    std::ifstream infile( file );
    std::string buf;
    std::getline( infile, buf );
    for( int i = 0; i < buf.length(); i++ )
        if( buf[i] != ' ' )
            mAlphabet.push_back( buf[i] );
    infile.close();
}

// ---------------- Public methods ----------------

bool Alphabet::isSymbPermissible( char symb ) {
    if( symb == S_SPACE )
        return true;
    for( auto it = mAlphabet.begin(); it != mAlphabet.end(); ++it )
        if( *it == symb )
            return true;
    return false;
}
