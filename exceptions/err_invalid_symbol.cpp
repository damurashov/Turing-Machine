#include "exceptions.h"
#include <string>

// ---------------------- Constr., destr. ----------------------

ErrInvalidSymbol::ErrInvalidSymbol( char symbol ) : symbol( symbol ) {}

// ---------------------- Public methods -----------------------

const char* ErrInvalidSymbol::what() const throw() {
    return "Invalid symbol. ";
}
