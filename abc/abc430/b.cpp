#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(n));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>v[i][j];

    map<string,int> mp;
    for(int i=0;i<=n-m;i++)for(int j=0;j<=n-m;j++)
    {
        // cout<<i<<'\t'<<j<<'\n';
        string masu="";
        for(int ni=i;ni<i+m;ni++)for(int nj=j;nj<j+m;nj++)
        {
            masu+=v[ni][nj];
        }
        // cout<<masu<<endl;
        mp[masu]++;
    }

    int cnt=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        // cout<<it->first<<' '<<it->second<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}