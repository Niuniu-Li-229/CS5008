/**
* Starter Code for Condition Practice Code Along
*
* This program explores condition statements in C
*/

#include <stdio.h>
#include <stdlib.h>

void simpleConditionPractice(int lower, int upper) {
    // if statement
    if (lower < upper) {
        printf("Lower is less than upper.\n");
    }
    else if (lower > upper) {
        printf("Lower is greater than upper.\n");
    }
    else {
        printf("Lower is equal to upper.\n");
    }

    //one line if
    if (lower < upper) printf("Lower is less than upper.\n");
    else printf("Lower is not less than upper.\n");
}

void complexConditionPractice(int lower, int upper) {
    // if statement with multiple conditions
    if (lower < upper && lower > 0) {
        printf("Lower is less than upper and greater than 0.\n");
    }
    else if (lower > upper || lower < 0) {
        printf("Lower is either greater than upper or less than 0.\n");
    }
    else {
        printf("Lower is equal to upper and greater than or equal to 0.\n");
    }

    // just using in values
    if (lower - upper){
        printf("Lower is not equal to upper.\n");
    } else {
        printf("Lower is equal to upper.\n");
    }
}

int main() {
    int lower = 10;
    int upper = 20;

    printf("Simple Condition Practcice with (%d, %d):\n", lower, upper);
    simpleConditionPractice(lower, upper);
    printf("\n");
    
    printf("Complex Condition Practcice with (%d, %d):\n", lower, upper);
    complexConditionPractice(lower, upper);
    printf("\n");


    lower = 10;
    upper = 10;

    printf("Simple Condition Practcice with (%d, %d):\n", lower, upper);
    simpleConditionPractice(lower, upper);
    printf("\n");

    printf("Complex Condition Practcice with (%d, %d):\n", lower, upper);
    complexConditionPractice(lower, upper);
    printf("\n");

    return 0;
}