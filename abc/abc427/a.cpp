#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=(s.size()-1)/2;
    for(int i=0;i<s.size();i++)
    {
        if(i!=n)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}