#include<bits/stdc++.h>
using namespace std;
void printSubsets(int ind,int n,int a[],vector<int>&ds)
{
    if(ind==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }
    //pick logic
    ds.push_back(a[ind]);
    printSubsets(ind+1,n,a,ds);
    ds.pop_back();
    //non pick logic
    printSubsets(ind+1,n,a,ds);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>ans;
    printSubsets(0,n,a,ans);
    return 0;
}
/*
3
1 2 3
1 2 3 
1 2 
1 3 
1 
2 3 
2 
3 
*/
