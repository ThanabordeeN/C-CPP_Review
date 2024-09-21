#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit the program with an error code
    }
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
    return 0;
}