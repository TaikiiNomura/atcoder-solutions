#include<iostream>
using namespace std;
int main()
{
    int N; cin>>N;
    int ans=0;
    for(int i=1;i<=N;i++)
    {
        int M=1;
        for(int j=0;j<i;j++)M*=-1;
        ans+=M*i*i*i;
        // cout<<M*i*i*i<<endl;
    }
    cout<<ans<<endl;
    return 0;
}