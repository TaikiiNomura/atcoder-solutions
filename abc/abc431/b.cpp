#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int x,n;cin>>x>>n;
    vector<int> w(n);
    for(int &in:w)cin>>in;
    vector<bool> p(n,false);
    int q;cin>>q;
    while(q--)
    {
        int in;cin>>in;in--;
        if(!p[in])
        {
            x+=w[in];
            p[in]=true;
        }
        else
        {
            x-=w[in];
            p[in]=false;
        }
        cout<<x<<endl;
    }
}
