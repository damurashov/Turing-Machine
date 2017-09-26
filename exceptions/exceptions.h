#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#ifndef STRING_H
#define STRING_H
#include <string>
#endif /* end of include guard: STRING_H */


/**
 * Interface for the hierarchy of Turing-Machine-Exceptions classes
 */
class TmException {
public:
    virtual const char* what() const throw() = 0;
};

/**
 * Is throwed in cases when CommandSet can not find a command for
 *   the pair of some state and an input symbol
 */
class ErrNoCommand : public TmException {
public:
    int     state;
    char    symbol;

    const char* what() const throw();
    ErrNoCommand( int state, char symbol );
};

/**
 * Input symbol is not present in the alphabet.
 */
class ErrInvalidSymbol : public TmException {
public:
    char symbol;

    const char* what() const throw();
    ErrInvalidSymbol( char symbol );
};

/**
 * A computation took too much time.
 */
class ErrInfiniteLoop : public TmException {
public:
    const char* what() const throw();
};

class ErrInvalidCommand : public TmException {
public:
    std::string command;

    const char* what() const throw();
    ErrInvalidCommand( const char* command );
};

#endif /* end of include guard: EXCEPTIONS_H */
