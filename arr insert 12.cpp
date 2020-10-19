#include <stdio.h>
int main()
{
   int arr[100], pos, i, n, value; 
   printf("Enter number of elements in array\n");
   scanf("%d", &n); 
   printf("Enter %d elements\n", n);
   for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
    printf("Enter the location where you wish to insert an element\n");
    scanf("%d", &pos);
   // printf("Enter the value to insert\n");
    //scanf("%d", &value);
    for (i = pos - 1; i <= n - 1; i++)
    {
    	arr[i] = arr[i+1];	
	} 
	n--;
   	//arr[pos-1] = value;
    printf("Resultant array is\n");
    for (i = 0; i < n; i++)
    {
    	printf("%d\n", arr[i]);	
	}
    return 0;
}

