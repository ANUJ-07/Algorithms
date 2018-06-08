using namespace std;
#include<bits/stdc++.h>

void maxheap(int arr[],int i,int n)
{
	int l = 2*i+1;
	int r = 2*i+2;
	int large;
	if(l<n && arr[l]>arr[i])
	{
		large = l;
	}
	else{
		large = i;
	}
	if(r<n && arr[r]>arr[large])
	{
		large = r;
	}
	if(large != i)
	{
		swap(arr[i],arr[large]);
		maxheap(arr,large,n);
	}
}

void buildheap(int arr[],int n)
{
	int i;
	for(i=(n-1)/2;i>=0;i--)
	{
		maxheap(arr,i,n);
	}
}

void heapsort(int arr[],int n)
{
	buildheap(arr,n);
	for(int i=n;i>1;i--)
	{
		swap(arr[i-1],arr[0]);
		maxheap(arr,0,i-1);
	}
}

int main()
{
	int n;
	int arr[50];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before Heap Sort:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	heapsort(arr,n);
	cout<<"\nAfter Heap Sort:\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
