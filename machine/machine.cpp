#include "machine.h"

// ------------------- Constr., destr. -------------------

Machine::Machine( Tape& tape,
    Alphabet& alphabet,
    CommandSet& cmdset) :
    mIter(0),
    mState(0),
    mTape( tape ),
    mAlphabet( alphabet ),
    mCmdset( cmdset ) {}

// ------------------- Public methods -------------------

bool Machine::step() {
    Command cmd;
    mIter++;

    try {
        cmd = mCmdset.getCommand( mState, mTape.getSymb() );
    } catch( ... ) {
        throw;
    }

    if( mIter > MAX_ITERS )
        throw ErrInfiniteLoop();

    if( ! mAlphabet.isSymbPermissible( mTape.getSymb() ) )
        throw ErrInvalidSymbol( mTape.getSymb() );

    if( ! mAlphabet.isSymbPermissible( cmd.symbAfter ) )
        throw ErrInvalidSymbol( cmd.symbAfter );

    if( cmd.stateBefore == cmd.stateAfter
        && cmd.symbBefore == cmd.symbAfter
        && cmd.tapeShift == 0
    ) {
        mIter = 0;
        return false;
    }
    mState = cmd.stateAfter;
    mTape.typeSymb( cmd.symbAfter );
    mTape.moveHead( cmd.tapeShift );
    return true;
}

const Tape& Machine::getTape() const {
    return mTape;
}

int Machine::getState() const {
    return mState;
}
