#include<bits/stdc++.h>
using namespace std;
int maxlen=0;
int printCombinationSum(int ind,int n,int N,vector<int>ds,int a[])
{
	
	if(ind==n)
	{
	    if(N==0)
	    {
		    for(auto it:ds)
		    {
			    cout<<it<<" ";
		    }
		    cout<<"\n";
	    }
	    if(maxlen<ds.size())
	    {
	        maxlen=ds.size();
	    }
	}
	else
	{
    if(a[ind]<=N)
    {
        ds.push_back(a[ind]);
        printCombinationSum(ind,n,N-a[ind],ds,a);
        ds.pop_back();
    }
    printCombinationSum(ind+1,n,N,ds,a);
	}
    return maxlen;
}
int main()
{
	int n,N;
	cin>>n>>N;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	vector<int>ans;
	cout<<printCombinationSum(0,n,N,ans,a);
	return 0;
}
/*
3
5
1
2
5
1 1 1 1 1 
1 1 1 2 
1 2 2 
5 
5
*/
