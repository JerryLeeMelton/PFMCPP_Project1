#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    
 
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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: smartPhone
//  action 1: smartPhone connects to network
              smartPhone.connectToNetwork();
//  action 2: smartPhone checks for updates
              smartPhone.checkForUpdate();
//  action 3: smartPhone sends user push notification
              smartPhone.sendPushNotification();

//  2)
//  Noun: dog
//  action 1: dog barks
              dog.bark();
//  action 2: dog sniffs
              dog.sniff();
//  action 3: dog licks
              dog.lick();

//  3)
//  Noun: cat
//  action 1: cat meows
              cat.meow();
//  action 2: cat scratches
              cat.scratch();
//  action 3: cat hisses
              cat.hiss();

//  4)
//  Noun: spaceHeater 
//  action 1: spaceHeater heats room
              spaceHeater.heatRoom();
//  action 2: spaceHeater checks temperature
              spaceHeater.checkTemperature();
//  action 3: spaceHeater pauses heating
              spaceHeater.pauseHeating();

//  5)
//  Noun: bird
//  action 1: bird flies
              bird.fly();
//  action 2: bird chirps
              bird.chirp();
//  action 3: bird digs for worms
              bird.digForWorms();

//  6)
//  Noun: audioInterface
//  action 1: audioInterface gets audio from input 1
              audioInterface.getInputOneAudio();
//  action 2: audioInterface gets audio from computer
              audioInterface.getComputerAudio();
//  action 3: audioInterface converts digital data to analog signal
              audioInterface.convertDigitalToAnalog();
 
//  7)
//  Noun: batteryCharger
//  action 1: batteryCharger charges battery
              batteryCharger.chargeBattery();
//  action 2: batteryCharger checks battery level
              batteryCharger.checkLevel();
//  action 3: batteryCharger stops charging
              batteryCharger.stopCharging();

//  8)
//  Noun: toasterOven
//  action 1: toasterOven heats food
              toasterOven.heatFood();
//  action 2: toasterOven decrements timer
              toasterOven.decrementTimer();
//  action 3: toasterOven stops heating
              toasterOven.stopHeating();

//  9)
//  Noun: digitalCamera
//  action 1: digitalCamera opens shutter
              digitalCamera.openShutter();
//  action 2: digitalCamera saves image
              digitalCamera.saveImage();
//  action 3: digitalCamera checks light levels
              digitalCamera.checkLightLevels();

//  10)
//  Noun: photographyStrobe
//  action 1: photographyStrobe charges next flash
              photographyStrobe.chargeFlash();
//  action 2: photographyStrobe fires flash
              photographyStrobe.fireFlash();
//  action 3: photographyStrobe blows fuse
              photographyStrobe.blowFuse();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
