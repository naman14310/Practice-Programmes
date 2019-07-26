#include<iostream>
using namespace std;

int main()
{   int n=10;
	int arr[n]={0,-1,-10,-2,5,-13,-13,0,0,-222};
	int max=arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]>max) max=arr[i];
	}
	cout<<max;
}
