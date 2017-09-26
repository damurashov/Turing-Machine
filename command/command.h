#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
    char symbBefore;
    char symbAfter;
    int stateBefore;
    int stateAfter;
    int tapeShift;

    const Command operator=( const Command& command );

    Command( const Command& command );
    Command( char symbBefore,
        char symbAfter,
        int stateBefore,
        int stateAfter,
        int tapeShift
    );
    Command();
};

#endif /* end of include guard: COMMAND_H */
