//Program to calculate number of digits in constant time complexity: O(1)
#include <stdio.h>
#include <math.h>

int main()
{
	double n, ans;
	printf("Enter a number to calculate its number of digits: ");
	scanf("%lf", &n);
	ans = log10(n) + 1;
	printf("The number of digits in %d is: %d", (int)n, (int)ans);
	return 0;
}
