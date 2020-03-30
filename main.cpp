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
//arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
//arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
//arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Smartphone
//  action 1: Smartphone connects to network
//            smartphone.connectToNetwork();
//  action 2: Smartphone checks for updates
//            smartphone.checkForUpdate();
//  action 3: Smartphone sends user push notification
//            smartphone.sendPushNotification();

//  2)
//  Noun: Dog
//  action 1: Dog barks
//            dog.bark();
//  action 2: Dog sniffs
//            dog.sniff();
//  action 3: Dog licks
//            dog.lick();

//  3)
//  Noun: Cat
//  action 1: Cat meows
//            cat.meow();
//  action 2: Cat scratches
//            cat.scratch();
//  action 3: Cat hisses
//            cat.hiss();

//  4)
//  Noun: Space heater 
//  action 1: Space heater heats room
//            spaceHeater.heatRoom();
//  action 2: Space heater checks temperature
//            spaceHeater.checkTemperature();
//  action 3: Space heater pauses heating
//            spaceHeater.pauseHeating();

//  5)
//  Noun: Bird
//  action 1: Bird flies
//            bird.fly();
//  action 2: Bird chirps
//            bird.chirp();
//  action 3: Bird digs for worms
//            bird.digForWorms();

//  6)
//  Noun: Audio interface
//  action 1: Audio interface gets audio from input 1
//            audioInterface.getInputOneAudio();
//  action 2: Audio interface gets audio from computer
//            audioInterface.getComputerAudio();
//  action 3: Audio interface converts digital data to analog signal
//            audioInterface.convertDigitalToAnalog();
 
//  7)
//  Noun: Battery Charger
//  action 1: Battery charger charges battery
//            batteryCharger.chargeBattery();
//  action 2: Battery charger checks battery level
//            batteryCharger.checkLevel();
//  action 3: Battery charger stops charging
//            batteryCharger.stopCharging();

//  8)
//  Noun: Toaster Oven
//  action 1: Toaster oven heats food
//            toasterOven.heatFood();
//  action 2: Toaster oven decrements timer
//            toasterOven.decrementTimer();
//  action 3: Toaster oven stops heating
//            toasterOven.stopHeating();

//  9)
//  Noun: Digital Camera
//  action 1: Digital camera opens shutter
//            digitalCamera.openShutter();
//  action 2: Digital camera saves image
//            digitalCamera.saveImage();
//  action 3: Digital camera checks light levels
//            digitalCamera.checkLightLevels();

//  10)
//  Noun: Photography Strobe
//  action 1: Photography strobe charges next flash
//            photographyStrobe.chargeFlash();
//  action 2: Photography strobe fires flash
//            photographyStrobe.fireFlash();
//  action 3: Photography strobe blows fuse
//            photographyStrobe.blowFuse();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
