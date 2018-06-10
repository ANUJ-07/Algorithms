using namespace std;
#include<bits/stdc++.h>


int main()
{
	int W;
	int wgt[10],val[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nWgt "<<i+1<<":";
		cin>>wgt[i];
		cout<<"\nVal "<<i+1<<":";
		cin>>val[i];
	}
	cout<<"\nTotal Weight:";
	cin>>W;
	
	int c[n+1][W+1];
	for(int i=0;i<W+1;i++)
	{
		c[0][i] = 0;
	}
	for(int i=1;i<n+1;i++)
	{
		c[i][0] = 0;
		for(int j=1;j<W+1;j++)
		{
			if(wgt[i-1]<=j)
			{
				if(val[i-1]+c[i-1][j-wgt[i-1]])
				{
					c[i][j] = val[i-1]+c[i-1][j-wgt[i-1]];
				}
				else
				{
					c[i][j] = c[i-1][j];
				}
			}
			else
			{
				c[i][j] = c[i-1][j];
			}
		}	
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<W+1;j++)
		{
			cout<<c[i][j]<<"\t";
		}
	cout<<"\n";
	}
}
