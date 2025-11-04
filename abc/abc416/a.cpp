#include<iostream>
using namespace std;
int main()
{
    int N,L,R;string S;cin>>N>>L>>R>>S;
    for(int i=L;i<R;i++)
    {
        if(S[i]!='o')
        {
            cout<<"No\n";return 0;
        }
    }
    cout<<"Yes\n";return 0;
}