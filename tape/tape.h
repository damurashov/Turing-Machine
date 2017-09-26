#ifndef TAPE_H
#define TAPE_H

#ifndef STRING_H
#define STRING_H
#include <string>
#endif /* end of include guard: STRING_H */

#ifndef FSTREAM_H
#define FSTREAM_H
#include <fstream>
#endif /* end of include guard: FSTREAM_H */


class Tape {
private:
    static const char S_SPACE;

    std::string mTape;
    int         mHeadPos;

    /**
     * Lengthen tape, appends "_" in case mHeadPos points to
     *   a nonexistent position.
     */
    void lengthenTape();
public:
    /**
     * Move the tape's head
     * @param direction 1 - move forward
     *                  0 - do not move
     *                  -1 - move backward
     */
    void moveHead( int direction );

    /**
     * Type symbol in the current position of the head
     * @param symb symbol
     */
    void typeSymb( char symb );

    /**
     * Get the symbol the tape points to.
     * @return symbol
     */
    char getSymb() const;

    /**
     * Get the current state of the tape.
     * @return [description]
     */
    const std::string& getTape() const;

    int getHeadPos() const;

    const Tape operator=( const Tape& tape );

    Tape( const char* path );
    Tape( const Tape& tape );
    Tape();
};

#endif /* end of include guard: TAPE_H */
