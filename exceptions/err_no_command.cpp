#include "exceptions.h"

#include <string>
// ----------------- Constr., destr. -----------------

ErrNoCommand::ErrNoCommand( int state, char symbol ):
    state( state ),
    symbol( symbol ) {}
// ----------------- Public methods -----------------

const char* ErrNoCommand::what() const throw() {
    return "There is no command for given state and input symbol. ";
}
