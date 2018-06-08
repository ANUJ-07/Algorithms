using namespace std;
#include<bits/stdc++.h>

int main(){
    vector<int> arr;
    int n,c,temp,i,flag = 0;
    cout<<"Length of Array:\n";
	cin>>n;
	cout<<"\nArray:\n";
    for(i=0;i<n;i++)
	{
    	cin>>c;
    	arr.push_back(c);
	}
	cout<<"Array Before Swap:\n";
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	
	for(int j=0;j<n-1;j++)
	{
		cout<<"\nAfter Pass "<<j+1<<":\n";
		for(int k=0;k<n-j-1;k++)
		{
			if(arr[k]>arr[k+1])
			{
				flag = 1;
				swap(arr[k],arr[k+1]);
			}
		}

		for(int l=0;l<n;l++)
			cout<<arr[l]<<"\t";
		cout<<"\n";
		if(flag == 0)
		{
			break;
		}
		else
		{
			flag = 0;
		}
	}
	cout<<"\nArray After Swap:\n";
	for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	return 0;
}
