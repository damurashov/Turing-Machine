#ifndef MACHINE_H
#define MACHINE_H

#include "tape.h"
#include "command_set.h"
#include "alphabet.h"
#include "exceptions.h"

#ifndef LIMITS_H
#define LIMITS_H
#include <limits.h>
#endif /* end of include guard: LIMITS_H */


class Machine {
private:
    static const int MAX_ITERS = 100000;
    unsigned    mIter;
    int         mState;
    Tape&       mTape;
    Alphabet&   mAlphabet;
    CommandSet& mCmdset;
    //Command&    mCurrCmd;
public:
    /**
     * Make one TM step
     * @return false - finite state has been reached
     *         true - otherwise
     */
    bool step() throw(
        ErrNoCommand,
        ErrInvalidSymbol,
        ErrInvalidCommand,
        ErrInfiniteLoop
    );
    const Tape& getTape() const;
    int getState() const;
    // bool step( History& hist );

    Machine( Tape& tape,
        Alphabet& alphabet,
        CommandSet& commandSet
    );
};

#endif /* end of include guard: MACHINE_H */
