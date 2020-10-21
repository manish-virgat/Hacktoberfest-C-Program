#include <stdio.h>
main()
{
	int arr[100],n,intial=0,final=n-1,i,mid,value,loc=-1;
	printf("enter the value size :");
	scanf("%d",&n);
	printf("\n enter the elements of arrays:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter the value that u wants to search:");
	scanf("%d",&value);
	
	while(intial<=final)
	 {
	 	mid=(intial+final)/2;
	 	if(arr[mid]==value)
	 	
	 	{
		   printf("the value is your present at %d",mid);
		   break;	
		}
	
		 else if(arr[mid]<value)
		 {
		 	final=mid-1;
		 }
		 else 
		 {
		    intial=mid+1;
		 }
	 }
	 if(loc=-1)
	 {
	 	printf("the value is not present in the array");
	 }
	 return 0;
}
