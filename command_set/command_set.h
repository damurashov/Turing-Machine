#ifndef COMMAND_SET_H
#define COMMAND_SET_H

#include "command.h"
#include "exceptions.h"

#ifndef STRING_H
#define STRING_H
#include <string>
#endif /* end of include guard: STRING_H */


#ifndef LIST_H
#define LIST_H
#include <list>
#endif /* end of include guard: LIST_H */


class CommandSet {
private:
    static const int NUM_PARAMETERS =   5;      // Number of parameters
    static const int ID_STATE_BEFORE =  0;
    static const int ID_SYMB_BEFORE = 1;
    static const int ID_STATE_AFTER =   2;
    static const int ID_SYMB_AFTER =  3;
    static const int ID_TAPE_SHIFT =    4;
    static const char SHIFT_LEFT =      'l';
    static const char SHIFT_RIGHT =     'r';
    static const char SHIFT_NOSHFT =    'e';
    static const char S_SPACE =         ' ';

    //int getNumBySymb( char symb );
    int getShiftBySymb( char symb );
    Command getCmdByStr( std::string& str ) throw( ErrInvalidCommand );

    std::list<Command> mCmds;

    CommandSet();
public:
    const Command& getCommand( int state, char symbol ) const throw( ErrNoCommand );
    CommandSet( const char* file );
};

#endif /* end of include guard: COMMAND_SET_H */
