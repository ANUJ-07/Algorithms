using namespace std;
#include<bits/stdc++.h>

int main()
{
	float w[10],v[10];
	int W;
	float vw[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nWgt "<<i+1<<":";
		cin>>w[i];
		cout<<"\nVal "<<i+1<<":";
		cin>>v[i];
		vw[i] = v[i]/w[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<vw[i]<<"\t";
    }
	cin>>W;
	for(int i=1;i<n;i++)
	{
		int p = vw[i];
		int q = v[i];
		int r = w[i];
		int j = i-1;
		while(j>=0 && p<=vw[j])
		{
			if(p==vw[j])
			{
				if(v[j]>=q)
				{
					vw[j+1]=vw[j];
					v[j+1]=v[j];
					w[j+1]=w[j];
				}
			}
			else{
				vw[j+1]=vw[j];
				v[j+1]=v[j];
				w[j+1]=w[j];
			}
			j--;
		}
		vw[j+1]=p;
		v[j+1]=q;
		w[j+1]=r;
	}
	for(int i=0;i<n;i++)
	{
		cout<<vw[i]<<"\t";
    }
	int currw = 0;
	int tval = 0;
	int k = n-1;
	while(currw<W && k>=0)
	{
		if(currw+w[k]<=W)
		{
			currw += w[k];
			cout<<w[k]<<"\t"<<v[k]<<"\n";
		}
		else
		{
			currw=W;
			cout<<w[k]<<"\t"<<v[k]<<"\t"<<(W-currw)/w[k]<<"\n";
		}
		k--;
	}
	return 0;
}
