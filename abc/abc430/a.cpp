#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>=a)
    {//飴をa個以上所持
        if(d>=b) cout<<"No\n";
        else cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}