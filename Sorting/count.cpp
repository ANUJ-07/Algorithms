using namespace std;
#include<bits/stdc++.h>

void countsort(int arr[],int arrB[], int n, int k)
{
	int arrC[k+1];
	for(int i=0;i<k+1;i++)
	{
		arrC[i] = 0;
	}
	for(int j=0;j<n;j++)
	{
		arrC[arr[j]] = arrC[arr[j]]+1;
	}
	for(int i=1;i<k+1;i++)
	{
		arrC[i] = arrC[i]+arrC[i-1];
	}
	for(int j=n-1;j>=0;j--)
	{
		arrB[arrC[arr[j]]-1] =arr[j];
		arrC[arr[j]] = arrC[arr[j]] - 1;
	}
}

int main()
{
	int n;
	int arr[50],arrB[50];
	int max = -1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	cout<<"Before Counting Sort:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	countsort(arr,arrB,n,max);
	cout<<"\nAfter Counting Sort:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arrB[i]<<"\t";
	}
	return 0;
}
