#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
int solve1(int &i)
{
    int num=-1;
    rep(_i,i)num*=(-1);
    return num;
}
void solve()
{
    int n; cin>>n;
    int ans=0;
    rep(i,n)
    {
        i++;
        ans+=solve1(i)+(i*i*i);
    }
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