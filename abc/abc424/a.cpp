#include<iostream>
#include<map>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    bool isok=false;
    if(A==B&&B==C&&C==A)isok=true;
    else if(A==B)isok=true;
    else if(A==C)isok=true;
    else if(B==C)isok=true;
    if(isok)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}