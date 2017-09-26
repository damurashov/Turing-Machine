#include "exceptions.h"

const char* ErrInfiniteLoop::what() const throw() {
    return "The computation lasts a long time. Probably an error was occured. ";
}
