#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> v(100,0);
    v[0]=1;
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<i;j++)
        {
            string s=to_string(v[j]);
            int num=0;
            for(char c:s)num+=c-'0';
            // cout<<num<<endl;
            v[i]+=num;
        }
    }
    cout<<v[n]<<endl;
    return 0;
}