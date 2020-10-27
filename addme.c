#include <stdio.h>
int main() {    

    int number1, number2;
    
    printf("Enter two integers with a space: ");
    scanf("%d %d", &number1, &number2);     
    
    printf("%d + %d = %d", number1, number2, number1+number2);
    return 0;
}
