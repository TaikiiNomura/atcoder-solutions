#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
void solve()
{
    string s; cin>>s;
    int n=s.size()/2+1;
    rep(i,s.size())
    {
        if(i+1!=n)cout<<s[i];
    }cout<<endl;
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t = 1;
    while(t--) {solve();}
    return 0;
}