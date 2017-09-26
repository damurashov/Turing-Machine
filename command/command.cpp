#include "command.h"

// --------------- Constr., destr. ---------------

Command::Command() {}

Command::Command( const Command& cmd ):
    symbBefore( cmd.symbBefore ),
    symbAfter( cmd.symbAfter ),
    stateBefore( cmd.stateBefore ),
    stateAfter( cmd.stateAfter ),
    tapeShift( cmd.tapeShift ) {}

Command::Command( char symbef,
    char symaft,
    int stbef,
    int staft,
    int tshift ) : symbBefore( symbef ),
    symbAfter( symaft ),
    stateBefore( stbef ),
    stateAfter( staft ),
    tapeShift( tshift ) {}

// ---------------- Public methods ----------------

const Command Command::operator=( const Command& cmd ) {
    symbBefore = cmd.symbBefore;
    symbAfter = cmd.symbAfter;
    stateBefore = cmd.stateBefore;
    stateAfter = cmd.stateAfter;
    tapeShift = cmd.tapeShift;
    return *this;
}
