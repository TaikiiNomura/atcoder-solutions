#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
void solve()
{
    int s,a,b,x,ans=0; cin>>s>>a>>b>>x;
    while(true)
    {
        if(a<x) ans+=(s*a);
        else break;
        x-=a; x-=b;
    }
    ans+=s*x;
    cout<<ans<<endl;
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t = 1;
    while(t--) {solve();}
    return 0;
}