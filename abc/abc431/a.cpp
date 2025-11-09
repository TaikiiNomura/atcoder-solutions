#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B;
    cin>>A>>B;
    int ans=max(0,A-B);
    cout<<ans<<endl;
}