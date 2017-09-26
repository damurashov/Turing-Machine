#ifndef ALPHABET_H
#define ALPHABET_H

#ifndef LIST_H
#define LIST_H
#include <list>
#endif /* end of include guard: LIST_H */


class Alphabet {
private:
    static const char S_SPACE;
    std::list<char> mAlphabet;
    Alphabet();
public:
    bool isSymbPermissible( char symb );

    Alphabet( const char* file );
};

#endif /* end of include guard: ALPHABET_H */
