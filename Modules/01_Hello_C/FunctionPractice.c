/**
 * Starter Code Function Practice Code Along
 * This program demonstrates the use of function in C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int add(int_64_t a, int_64_t b) {
    return a + b;
}

int substract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle as needed
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
        return 0; // Return 0 or handle as needed
    }
    return a % b;
}

int main() {
    int a = 10;
    int b = 5;

    printf("Addition: %d\n", add(a, b)); // .2f for float, .2lf for double, 0f for int
    printf("Subtraction: %d\n", substract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %d\n", divide(a, b));


}