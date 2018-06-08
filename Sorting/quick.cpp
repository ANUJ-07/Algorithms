using namespace std;
#include<bits/stdc++.h>

int partition(int arr[],int p,int q)
{
	int x = arr[q];
	int i = p-1;
	for(int j=p;j<q;j++)
	{
		if(arr[j]<=x)
		{
			i = i+1;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[q]);
	return i+1;
}

void quicksort(int arr[],int p, int q)
{
	if(p<q)
	{
		int r = partition(arr,p,q);
		quicksort(arr,p,r-1);
		quicksort(arr,r+1,q);
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
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	quicksort(arr,0,n-1);
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
