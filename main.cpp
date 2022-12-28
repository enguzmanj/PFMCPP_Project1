#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        tvRemote
//  action 1:    the tv remote turns on the tv
tvRemote.turnOnTv();
//  action 2:    the tv remote increases the tv volume
tvRemote.increaseTvVolume();
//  action 3:    the tv remote opens Netflix
tvRemote.openNetflix();
//  2)
//  Noun:        cat
//  action 1:    the cat meows
cat.meow();
//  action 2:    the cat scratches the curtains
cat.scratchCurtains();
//  action 3:    the cat purrs
cat.purr();
//  3)
//  Noun:        baby
//  action 1:    the baby cries
baby.cry();
//  action 2:    the baby screams
baby.scream();
//  action 3:    the baby laughs
baby.laugh();
//  4)
//  Noun:        cpp compiler
//  action 1:    the cpp compiler compiles the code
cppCompiler.compileCode();
//  action 2:    the cpp compiler raises an error
cppCompiler.raiseError();
//  action 3:    the cpp compiler crashes
cppCompiler.crash();
//  5)
//  Noun:        clown
//  action 1:    the clown makes kids laugh
clown.makeKidsLaugh();
//  action 2:    the clown makes a balloon animal
clown.makeBalloonAnimal();
//  action 3:    the clown sings songs
clown.singSong();
//  6)
//  Noun:        Bugs Bunny
//  action 1:    Bugs Bunny says What's up Doc
bugsBunny.sayWhatsUpDoc();
//  action 2:    Bugs Bunny tells a joke
bugsBunny.tellJoke();
//  action 3:    Bugs Bunny does a gag
bugsBunny.doGag();
//  7)
//  Noun:        lemon
//  action 1:    the lemon gives lemon juice
lemon.giveJuice();
//  action 2:    the lemon makes people flinch
lemon.makePersonFlinch();
//  action 3:    the lemon ripens
lemon.ripen();
//  8)
//  Noun:        door
//  action 1:    the door opens
door.open();
//  action 2:    the door closes
door.close();
//  action 3:    the door jams
door.jam()
//  9)
//  Noun:        car
//  action 1:    the car accelerates
car.accelerate();
//  action 2:    the car breaks
car.break();
//  action 3:    the car overheats
car.overheat();
//  10)
//  Noun:        bus
//  action 1:    the bus makes its wheels go round and round
bus.makeWheelsGoRoundAndRound();
//  action 2:    the bus goes to the stop
bus.goToStop();
//  action 3:    the bus stops at the stop
bus.stop();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
