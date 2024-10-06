#include <stdio.h>

// Function to calculate GCD of two numbers
int findGCD(int a, int b) {
    int remainder = a % b;
    while (remainder != 0) {
        remainder = a % b; // remainder should be here, before a = b
        a = b;
        //b = remainder;  // otherwise the function uses an updated version of a
        remainder = a % b; 
        //a = b; not needed, already executed
    }
    return b;
}

int main() {
    int num1 = 56, num2 = 48;
    int result = findGCD(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}

