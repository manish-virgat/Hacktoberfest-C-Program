#include <stdio.h>

int main()
{
    int number, numberCopy, rem, result = 0;
    
    printf("Enter a number to be checked if it is Armstrong number: ");
    scanf("%d", &number);
    numberCopy = number;

    while (number != 0) {
        rem = number % 10;
        result += rem * rem * rem;
        number /= 10;
    }

    if (result == numberCopy) {
        printf("\n%d is an Armstrong number.", numberCopy);
    }
    else {
        printf("\n%d is not an Armstrong number.", numberCopy);
    }

    return 0;
}