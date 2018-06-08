using namespace std;
#include<bits/stdc++.h>

void countsort(int arr[], int n, int k)
{
	int arrC[10];
	int arrB[n];
	for(int i=0;i<10;i++)
	{
		arrC[i] = 0;
	}
	for(int j=0;j<n;j++)
	{
		arrC[(arr[j]/k)%10] = arrC[(arr[j]/k)%10]+1;
	}
	for(int i=1;i<10;i++)
	{
		arrC[i] = arrC[i]+arrC[i-1];
	}
	for(int j=n-1;j>=0;j--)
	{
		arrB[arrC[(arr[j]/k)%10]-1] =arr[j];
		arrC[(arr[j]/k)%10] = arrC[(arr[j]/k)%10] - 1;
	}
	cout<<"\nPass :";
	for(int i=0;i<n;i++)
	{
		cout<<setw(5);
		cout<<arrB[i]<<"\t";
		arr[i]=arrB[i];
	}
	cout<<"\n";
}

void radixsort(int arr[],int n,int k)
{
	for(int i=1;k/i>0;i*=10)
	{
		countsort(arr,n,i);
	}
}

int main()
{
	int n;
	int arr[50];
	cin>>n;
	int k = -1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(k<arr[i])
		{
			k = arr[i];
		}
	}
	cout<<"Before Radix Sort:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	radixsort(arr,n,k);
	cout<<"\nAfter Radix Sort:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
