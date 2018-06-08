using namespace std;
#include<bits/stdc++.h>

int main()
{
	vector <int> arr;
	int i,j,k,l,temp;
	int n,m;
	cout<<"Length of Array:\n";
	cin>>n;
	cout<<"\nArray:\n";
	for(i =0;i<n;i++)
	{
		cin>>l;
		arr.push_back(l);
	}
	cout<<"Array Before Swap:\n";
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	
	for(int j=0;j<n;j++)
	{
		m = j;
		cout<<"\nAfter Pass "<<j+1<<":\n";
		for(int k=j+1;k<n;k++)
		{
			if(arr[k]<arr[m])
			{
				m=k;
			}
		}
		swap(arr[m],arr[j]);
		for(int l=0;l<n;l++)
			cout<<arr[l]<<"\t";
		cout<<"\n";
	}
	cout<<"\nArray After Swap:\n";
	for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	
	return 0;
}
