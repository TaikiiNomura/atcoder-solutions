#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define print(x) cout<<x<<'\n'
int main()
{
    int x,c,ans;
	cin>>x>>c;
	ans=x/(1000+c);
	print(ans*1000);
	return 0;
}