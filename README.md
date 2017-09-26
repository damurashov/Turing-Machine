# Turing Machine

## Usage
There is nothing better than a good example. See folder **./bin**.

## Contributing
![Architecture](https://github.com/sleeplynerd/Turing-Machine/blob/master/architecture/arch.png)

See folder **./architecture** to get a full view of the project. If you need examples, look at the file **main/main.cpp**

In short, class "Machine" is the core of the whole project. Machine's constructor receives 3 objects: an "infinite" input tape, a set of commands and an alphabet.

There is 4 exception classes. The function Machine::step() changes the state of the machine and throws 1 of 4 exceptions.
```cpp
bool Machine::step() throw(
    ErrNoCommand,
    ErrInvalidSymbol,
    ErrInvalidCommand,
    ErrInfiniteLoop
);
```

### ErrNoCommand
There is no instruction for given state and input symbol.

### ErrInvalidSymbol
The symbol is not present in the alphabet.

### ErrInvalidCommand
CommandSet's constructor can not parse an instruction in the input file.

### Err InfiniteLoop
The computation takes too much iterations. The limit is set in class Machine.

```cpp
int Machine::MAX_ITERS = 100000;
```

## Input data format
### 'alphabet.tm'
File alphabet contains the string of allowed symbols. Underscore "_" is allowed by default.
### 'tape.tm'
Input tape.
### 'commands.tm'
Contains the list of commands in the following format:
**1 a 2 b r**.

When the machine is in state '1' and there is 'a' as the current read symbol, switch the machine to the state 2 and type 'b' instead of 'a'. Shift the pointer of the tape  right.

* r - shift right;
* l - shift left;
* e - do not shift.
