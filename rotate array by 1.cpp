#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

	int n;

	cout<<"enter the size of array";
	cin>>n;

	int arr[n];
	cout<<"enter "<<n<<" elements\n";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];

    }
    cout<<"before rotating array look like \n";
    for(int i=0;i<n;i++)
    {
    	cout<< arr[i]<<" ";

    }
    cout<<"\nrotating array by 1 element after\n";
    int temp=arr[0],temp1=arr[1];
    for(int i=1;i<n;i++)
    {
         cout<<arr[i]<<" ";
    	
    }
    cout<<temp;
    return 0;
}