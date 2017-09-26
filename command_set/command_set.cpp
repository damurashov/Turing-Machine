#include "command_set.h"
#include <fstream>


// ---------------- Constr., destr. ----------------

CommandSet::CommandSet() {}

CommandSet::CommandSet( const char* file ) {
    std::fstream infile( file );
    std::string buf;
    while( std::getline( infile, buf ) ) {
        try {
            mCmds.push_back( getCmdByStr( buf ) );
        } catch( ... ) {
            throw ErrInvalidCommand( buf.c_str() );
        }
    }
    infile.close();
}

// ---------------- Private methods ----------------

int CommandSet::getShiftBySymb( char symb ) {
    switch( symb ) {
    case SHIFT_LEFT:
        return -1;
    case SHIFT_RIGHT:
        return 1;
    case SHIFT_NOSHFT:
        return 0;
    }
    return 0;
}

// ---------------- Public methods -----------------

const Command& CommandSet::getCommand( int state, char symbol ) const throw( ErrNoCommand ) {
    for( auto it = mCmds.begin(); it != mCmds.end(); ++it )
        if( it -> symbBefore == symbol && it -> stateBefore == state )
            return *it;
    throw ErrNoCommand( state, symbol );
}

Command CommandSet::getCmdByStr( std::string& str ) {
    using namespace std;
    int lpos = 0;
    int rpos;
    Command cmd;
    string arrcfg[ NUM_PARAMETERS ];
    for( int i = 0; i < NUM_PARAMETERS; i++ ) {
        rpos = str.find( S_SPACE, lpos );
        rpos = ( ( rpos == string::npos ) ? str.length() : rpos );
        arrcfg[i] = str.substr( lpos, rpos - lpos );
        lpos = rpos + 1;
    }
    for( int i = 0; i < NUM_PARAMETERS; i++ )
        if( arrcfg[i].empty() )
            throw;
    try {
        cmd.stateBefore = stoi( arrcfg[ ID_STATE_BEFORE ] );
        cmd.stateAfter = stoi( arrcfg[ ID_STATE_AFTER ] );
        cmd.symbBefore = arrcfg[ ID_SYMB_BEFORE ].front();
        cmd.symbAfter = arrcfg[ ID_SYMB_AFTER ].front();
        cmd.tapeShift = getShiftBySymb( arrcfg[ ID_TAPE_SHIFT ].front() );
    } catch( ... ) {
        throw;
    }
    return cmd;
}
