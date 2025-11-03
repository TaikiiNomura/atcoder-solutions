#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
void solve()
{
    int n,m; cin>>n>>m;
    rep(i,n)
    {
        if(i+1<=m)cout<<"OK\n";
        else cout<<"Too Many Requests\n";
    }
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t = 1;
    while(t--) 
    {
        solve();
    }
    return 0;
}