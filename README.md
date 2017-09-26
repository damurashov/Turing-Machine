# Turing Machine

## Usage
There is nothing better than a good example. See folder **./bin**.

## Contributing
![Architecture](https://github.com/sleeplynerd/Turing-Machine/blob/master/architecture/arch.png)

## Input data format
### 'alphabet.tm'
File alphabet contains the string of allowed symbols. Underscore "_" is allowed by default.
### 'tape.tm'
Input tape.
### 'commands.tm'
Contains the list of commands in the following format:
**1 a 2 b r**.

When the machine is in state '1' and there is 'a' as the current read symbol, switch the machine to the state 2 and type 'b' instead of 'a'. Shift the pointer to the right.

* r - shift right;
* l - shift left;
* e - make no shift.
