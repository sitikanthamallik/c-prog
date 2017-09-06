#include <math.h>
#include<conio.h>
#include<iostream>

using namespace std;

int minDiff(int arr[], int n) 
{	int diff = INT_MAX;			//initializing diff to maximum integer value
	for (int i = 0; i < n; ++i)	//finding difference for all pairs
	{
		for (int j = i+1; j < n; ++j)
		{
			if(abs(arr[i]-arr[j])<diff)
			{
				diff = abs(arr[i]-arr[j]);
			}
		}
	}
	return diff;  //minimum difference
}
int maxDiff(int arr[], int n) 
{	int diff = 0;		
	for (int i = 0; i < n; ++i)	//finding difference for all pairs
	{
		for (int j = i+1; j < n; ++j)
		{
			if(abs(arr[i]-arr[j])>diff)
			{
				diff = abs(arr[i]-arr[j]);
			}
		}
	}
	return diff;  //maximum difference
}

int main()
{

	int arr[] = {5, 9, 23, 18, 13};	//initilaizing the array
	int n = sizeof(arr)/sizeof(arr[0]); //will give the size of the array
	int ans = minDiff(arr,n);
	cout<<"Minimum difference is "<<ans;
		int ans1 = maxDiff(arr,n);
	cout<<"\nmaximum difference is "<<ans1;

	getch();
	return 0;
}
