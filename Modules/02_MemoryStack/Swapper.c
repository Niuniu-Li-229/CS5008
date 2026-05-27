# include <stdio.h>
# include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a; // store the value at address a in temp
    *a = *b; // assign the value at address b to address a
    *b = temp; // assign the value stored in temp (original value at address a) to address b
}

int main () {
    int num1 = 10;
    int num2 = 20;

    printf("Values: num1 = %d, num2 = %d\n", num1, num2);
    // int temp = num1; // store num1 in a temporary variable
    // num1 = num2; // assign num2 to num1
    // num2 = temp; // assign the value stored in temp (original num1) to num2

    swap(&num1, &num2); // pass the addresses of num1 and num2 to the swap function

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}