#include<bits/stdc++.h>
using namespace std;
void pp(string s,string ss,int n,int vis[])
{
    if(n==ss.size())
    {
        cout<<ss<<"\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            pp(s,ss+s[i],n,vis);
            vis[i]=0;
        }
    }
}
int main()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    string ss="";
    int vis[n];
    for(int i=0;i<n;i++)
    {
        vis[i]=0;
    }
    pp(s,ss,n,vis);
    return 0;
}
/*
abc
abc
acb
bac
bca
cab
cba
*/
