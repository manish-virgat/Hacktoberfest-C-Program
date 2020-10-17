#include<iostream>
using namespace std;
int i,j,temp;
int InsertionSort(int a[],int n)
{
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

int main()
{
	int n;
    cout<<"Enter number of elements\n";
    cin>>n;
    int a[n];
    cout<<"Enter elements\n";
    for (i= 0; i<n; i++)
    {
        cin>>a[i];
    }
    InsertionSort(a,n);
    cout<<"Sorted array :\n";
    for(i=0; i< n;i++)
    cout<<a[i]<<"\t";
    return 0;
}
