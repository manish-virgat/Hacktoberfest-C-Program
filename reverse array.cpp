#include<iostream>
using namespace std;
void reversearray_swap(int arr[],int low,int high)

{
	int n=high;
	while (low<high)
	{
		if (arr[low]<arr[high])
		{
          int temp=arr[low];
          arr[low]=arr[high];
          arr[high]=temp;
          low++;
          high--;
		}
	}
	cout<<"\nrever the arry using swapping\n";
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main(int argc, char const *argv[])
{
	int n;

	cout<<"enter the size of array";
	cin>>n;

	int arr[n];
	cout<<"enter "<<n<<" elements\n";
    for(int i=0;i<n;i++){
    	cin>>arr[i];

    }
    cout<<"before reverse the array \n ";
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<"\nafter reversing the array\n";
    for(int i=n-1;i>=0;i--){
    	cout<<arr[i]<<" ";
    }
	///another mathod using swapping the array
	int low=0,high=n-1;
	reversearray_swap(arr,low, high);
	return 0;

}