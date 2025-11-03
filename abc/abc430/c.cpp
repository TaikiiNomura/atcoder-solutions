#include<iostream>
using namespace std;
int main()
{
    int n,a,b; string s; cin>>n>>a>>b>>s;
    // a以上b未満
    for(int i=0;i<n;i++)
    {
        string x=s.substr(i,a);
        cout<<x<<endl;
    }
}