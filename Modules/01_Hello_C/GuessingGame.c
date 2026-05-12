/**
* Guessing Game Code Along
* 
* This code along implements a small guessing game in C.
* The player has to guess a number between 1 and 100.
* it provides feedback on whether the guess is too high or too low.
* The game continues until the player guesses the correct number.
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generation

// random number - get it
int getRandomNumber(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

// getInput from player
int getInput() {
    int input = 0;
    scanf("%d", &input); // not safe, fix in future! because we assume the input is a number
    return input;
}

// need loop that give feedback, high or low or correct
int runGame(int randomNumber) {
    int guess = 0;
    int attempts = 0;
    
    while (guess != randomNumber) {
        printf("Enter your guess (1-100): ");
        guess = getInput();
        attempts++;

        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts!\n", randomNumber, attempts);
        }
    }

    return attempts;
}

// we need a loop start or play again
void start(){
    printf("Welcome to the Guessing Game!\n");
    int choice = 0;

    while (choice != 2) {
        printf("1. Play Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        choice = getInput();

        if (choice == 1) {
            int randomNumber = getRandomNumber(1, 100);
            printf("Starting the game ...\n");
            runGame(randomNumber);
        } else if (choice == 2) {
            printf("Thank you for playing! Goodbye!\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}


int main() {
    srand(time(NULL)); // seed the random number generator

    // printf("Random number: %d\n", getRandomNumber(1, 100)); // get a random number between 1 and 100

    // printf("Enter in a value: ");
    // int intput = getInput();
    // printf("You entered: %d\n", intput);

    // runGame(10); // for testing, we will use a fixed number, but we will change it to a random number later
    // runGame(getRandomNumber(1, 100)); // now we will use a random number

    start(); // start the game

    return 0;
}   