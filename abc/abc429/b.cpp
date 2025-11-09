#include<algorithm>
#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;cin>>N>>M;
    vector<int> A(N);for(int& a:A)cin>>a;
    int num_sum=accumulate(A.begin(),A.end(),0);
    for(int a:A)if(num_sum-a==M)
    {
        cout<<"Yes\n";
        return 0;
    }
    cout<<"No\n";
    return 0;
}