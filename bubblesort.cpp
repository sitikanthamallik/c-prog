#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	int n, i, arr[50], j, temp;
	cout<<"bubble sort: Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using bubble sort technique...\n";
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
	return 1;
	
}
