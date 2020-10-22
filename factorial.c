#include <stdio.h>
#include <stdlib.h>

long recursiveCalculateFactorial(long number, long currentResult){

    if (number == 0) return currentResult;

    return recursiveCalculateFactorial(number - 1, number * currentResult);

}

long calculateFactorial(long number){

    long result = 1;

    for (int i = 1; i <= number; i++) result *= i;
    
    return result;

}

int main(int arc, char *argv[]){

    long result = calculateFactorial(atol(argv[1]));
    printf("The factorial of %li is %li\n", atol(argv[1]), result);

    return 0;

}