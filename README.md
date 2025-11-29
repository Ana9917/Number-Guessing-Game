# Number Guessing Game

Simple console number-guessing game written in C++ from Roadmap.sh: https://roadmap.sh/projects/number-guessing-game

## Description
The program picks a random integer between 1 and 100. The player selects a difficulty (Easy/Medium/Hard) which determines the number of attempts, then tries to guess the number with feedback after each guess.

## Files
- `Number Guessing Game.cpp` — main source file
- `README.md` — this file

## Prerequisites
- Visual Studio 
- C++ toolset / workload installed

## Build and run
1. Open the solution in Visual Studio.
2. To build and run without debugging use __Debug > Start Without Debugging__ or press __Ctrl + F5__.
3. Alternatively, build with __Build > Build Solution__ and run the produced executable.

## How to play
1. Start the program.
2. Choose difficulty:
   - `1` — Easy (10 attempts)
   - `2` — Medium (5 attempts)
   - `3` — Hard (3 attempts)
3. Enter numeric guesses when prompted. The program reports whether the target is higher or lower.
4. Game ends when you guess correctly or run out of attempts.