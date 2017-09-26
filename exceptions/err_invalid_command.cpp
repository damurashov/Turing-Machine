#include "exceptions.h"


ErrInvalidCommand::ErrInvalidCommand( const char* cmd ) :
    command( cmd ) {}

const char* ErrInvalidCommand::what() const throw() {
    return "Invalid command. ";
}
