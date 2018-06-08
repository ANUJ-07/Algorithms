using namespace std;
#include<bits/stdc++.h>

int main()
{
	vector <int> arr;
	int i,j,k,l;
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
	
	for(int j=1;j<n;j++)
	{
		m = arr[j];
		k=j-1;
		cout<<"\nAfter Pass "<<j+1<<":\n";
		while(arr[k]>m && k>=0)
		{
			arr[k+1] = arr[k];
			k--;
		}
		arr[k+1] = m;
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
