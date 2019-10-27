# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.
# Capstone-Project
For the Capstone-Projekt the snake game have been redesigned. The game is extended with a maze and a Input for the initial starting speed of the game. 

# Expected Behavoir 
The maze have the look of a tow bars on the gaming window. 
The User can choose bewenn there speed levels in the beginning of the game.

# Directory Structure
The Project have two folders:
* cmake
* src

In the src folder have been added two more fils:
* obstacle.h
* obstacle.cpp

#Maching Project-Rubric
* A variety of control structures are used in the project. Or the project code is clearly organized into functions.
    * File: obstacle.h; obstacle.cpp
    
* The project accepts input from a user as part of the necessary operation of the program.
    * File: snake.cpp ->  Line 89 -99     

* The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. (Just the delta to the orginal code is listed)
    * File: obstacle.h; obstacle.cpp

* All class data members are explicitly specified as public, protected, or private.
    * File: obstacle.h; obstacle.cpp

* At least two variables are defined as references, or two functions use pass-by-reference in the project code.
    *File: renderer.cpp -> Line 8; Game.cpp -> Line 5

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.