using namespace std;
#include<bits/stdc++.h>

void merge(int arr[],int p,int q,int r)
{
	int l1 = r-p+1;
	int l2 = q-r;
	int left[l1];
	int right[l2];
	for(int i=0;i<l1;i++)
	{
		left[i] = arr[p+i];
	}
	for(int i=0;i<l2;i++)
	{
		right[i] = arr[r+i+1];
	}
	
	int m=0,n=0;
	int j=p;
	while(m<l1 && n<l2)
	{
		if(left[m]<right[n])
		{
			arr[j] = left[m];
			j++;
			m++;
		}
		if(left[m]>=right[n])
		{
			arr[j] = right[n];
			n++;
			j++;
		}
	}
	while(m<l1)
	{
		arr[j] = left[m];
		j++;
		m++;
	}
	while(n<l2)
	{
		arr[j] = right[n];
		n++;
		j++;
	}
}

void mergesort(int arr[],int p,int q)
{
	if(p<q)
	{
		int r=(q+p)/2;
		mergesort(arr,p,r);
		mergesort(arr,r+1,q);
		merge(arr,p,q,r);
	}
}


int main()
{
	int n,c;
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
	mergesort(arr,0,n-1);
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
