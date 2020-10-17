#include<iostream>
using namespace std;
int i,j;
int SelectionSort(int a[],int n)
{
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int t=a[min];
            a[min]=a[i];
            a[i]=t;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the no of elements:\n ";
	cin>>n;
    int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Elements:"<<i+1<<"\t";
		cin>>a[i];
	}
	SelectionSort(a,n);
	cout<<"Sorted Data :\n ";
	for (i = 0;i<n;i++)
	cout<<a[i];
 
}
