#include<bits/stdc++.h>
using namespace std;
void printCombinationSum(int N,vector<int>&ds)
{
	if(N==0)
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
	}
	for(int i=1;i<=N;i++)
	{
		ds.push_back(i);
		printCombinationSum(N-i,ds);
		ds.pop_back();
	}
}
int main()
{
	int N;
	cin>>N;
	vector<int>ans;
	printCombinationSum(N,ans);
	return 0;
}
/*
4
1 1 1 1 
1 1 2 
1 2 1 
1 3 
2 1 1 
2 2 
3 1 
4 
*/
