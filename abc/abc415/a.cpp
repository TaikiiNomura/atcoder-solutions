#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N; cin>>N;
    vector<int> A(N); for(int& a:A)cin>>a;
    int X; cin>>X;
    for(int a:A)if(a==X){cout<<"Yes\n";return 0;}
    cout<<"No\n";return 0;
}