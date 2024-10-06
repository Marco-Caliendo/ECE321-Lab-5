#include <stdio.h>

int factorial_for(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int factorial_while(int n) {
    int result = 1;
    int i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

int main() {
    int num = 5;
    int result_for = factorial_for(num);
    int result_while = factorial_while(num);

    printf("Factorial using for loop: %d\n", result_for);
    printf("Factorial using while loop: %d\n", result_while);

    return 0;
}
