#include <stdio.h>
#include <stdlib.h>

long calculateFactorial(long number, long currentResult){

    if (number == 0) return currentResult;

    return calculateFactorial(number - 1, number * currentResult);

}

int main(int arc, char *argv[]){

    long result = calculateFactorial(atol(argv[1]), 1);
    printf("The factorial of %li is %li\n", atol(argv[1]), result);

    return 0;

}