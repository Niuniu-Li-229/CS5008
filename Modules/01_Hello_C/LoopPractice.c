/**
* Starter Code for Loop Practice Code Along
*
* This program explores loop statements in C
*/

#include <stdio.h>
#include <stdlib.h>

void forLoopPractice(int start, int end) {
    // for loop
    for (int i = start; i < end; i++) {
        printf("For loop %d\n", i);
    }

    // reserve loop
    for (int i = end - 1; i >= start; i--) {
        printf("Reverse For loop %d\n", i);
    }

    for (int i = start; i < end; i+=2) {
        printf("For loop with step 2: %d\n", i);
    }
    printf("\n");
}

void whileLoopPractice(int start, int end) {
    // while loop
    int i = start;
    while (i < end){
        printf("While loop %d\n", i);
        i++;
    }

    // reserve while loop
    i = end - 1;
    while( i >= start){
        printf("Reverse while loop %d\n", i);
        i--;
    }

    i = start;
    while (i < end){
        printf("While loop with step 2: %d\n", i);
        i+=2;
    }
}

void whileLoopMenu(){
    int choice = 0;
    while (choice != 3){
        printf("1. For Loop\n");
        printf("2. While Loop\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                forLoopPractice(0, 10);
                break;
            case 2:
                whileLoopPractice(0, 10);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {

    forLoopPractice(0, 10);
    whileLoopPractice(0, 10);
    whileLoopMenu();

    return 0;
}