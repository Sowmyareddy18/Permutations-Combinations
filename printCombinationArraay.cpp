#include<bits/stdc++.h>
using namespace std;
void printCombinationSum(int ind,int n,int N,vector<int>&ds,int a[])
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
	    return;
	}
    if(a[ind]<=N)
    {
        ds.push_back(a[ind]);
        printCombinationSum(ind,n,N-a[ind],ds,a);
        ds.pop_back();
    }
    printCombinationSum(ind+1,n,N,ds,a);
}
int main()
{
	int n,N;
	cin>>n>>N;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];//1 2 4
	}
	vector<int>ans;
	printCombinationSum(0,n,N,ans,a);
	return 0;
}
/*
3
4
1
2
4
1 1 1 1 
1 1 2 
2 2 
4 
*/
