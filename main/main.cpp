#include "machine.h"
#include "exceptions.h"
#include "tape.h"
#include "command_set.h"
#include "command.h"

#ifndef FSTREAM
#define FSTREAM
#include <fstream>
#endif /* end of include guard: FSTREAM */

#ifndef STRING_H
#define STRING_H
#include <string>
#endif /* end of include guard: STRING_H */

#ifndef IOSTREAM_H
#define IOSTREAM_H
#include <iostream>
#endif /* end of include guard: IOSTREAM_H */

using namespace std;

static ofstream outfile;

static void printTape( const Tape& tape );
static void printCommand( const Command& cmd );
static void printState( int state );
static void printIntro();
static void printDelimeter();

void printTape( const Tape& tape ) {
    outfile << "TAPE:\t\t" << tape.getTape() << endl;
    outfile << "POINTER:\t";
    for( int i = 0; i < tape.getTape().length(); i++ ) {
        if( i == tape.getHeadPos() )
            outfile << '|';
        else
            outfile << '_';
    }
    outfile << endl;
}

void printCommand( const Command& cmd ) {
    char tapeshft = 'e';
    switch( cmd.tapeShift ) {
    case -1:
        tapeshft = 'l';
        break;
    case 0:
        tapeshft = 'e';
        break;
    case 1:
        tapeshft = 'r';
        break;
    }
    outfile << "COMMAND:\t" << cmd.stateBefore << ' ' <<
        cmd.symbBefore << ' ' <<
        cmd.stateAfter << ' ' <<
        cmd.symbAfter << ' ' <<
        tapeshft << endl;
}

void printIntro() {
    // Initial output
    cout<< " *-----------------------------------*"   << endl
        << " *      Turing Machine Emulator      *"   << endl
        << " *      SUAI, 2017                   *"   << endl
        << " *-----------------------------------*"   << endl << endl;
}

void printState( int state ) {
    outfile << "STATE:\t\t" << state << endl;
}

void printDelimeter() {
    outfile << "---------------------" << endl;
}

int main( void ) {
    try {
        Tape        tape( "tape.tm" );
        Alphabet    alph( "alphabet.tm" );
        CommandSet  cmdset( "commands.tm" );
        Machine     tmachine( tape, alph, cmdset );

        outfile.open( "output.tm", std::ofstream::out | std::ofstream::trunc );

        printIntro();
        printTape( tape );
        printState( tmachine.getState() );
        printCommand( cmdset.getCommand( tmachine.getState(), tmachine.getTape().getSymb() ) );\
        while( tmachine.step() ) {
            printDelimeter();
            printState( tmachine.getState() );
            printTape( tape );
            printCommand( cmdset.getCommand( tmachine.getState(), tmachine.getTape().getSymb() ) );
        }
        cout << "Done!" << endl;
    } catch( ErrNoCommand& err ) {
        cout << err.what() << endl <<
            "State: " << err.state << endl <<
            "Input symbol: " << err.symbol << endl;
    } catch( ErrInvalidSymbol& err ) {
        cout << err.what() << endl <<
            "Symbol: " << err.symbol << endl;
    } catch( ErrInvalidCommand& err ) {
        cout << err.what() << endl <<
            "Command: [" << err.command << "]" << endl;
    } catch( ErrInfiniteLoop& err ) {
        cout << err.what() << endl;
    } catch( ... ) {
        cout << "An undefined error occured." << endl;
    }
    outfile.close();
    return 0;
}
