#include<iostream>
#include<map>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
void solve()
{
    // Ocelot Serval Lynx
    string a,b; cin>>a>>b;
    map<string,int> mp={{"Ocelot",0},{"Serval",1},{"Lynx",2}};
    if(mp[a]>=mp[b]) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t = 1;
    while(t--) {solve();}
    return 0;
}