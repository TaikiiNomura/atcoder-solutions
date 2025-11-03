#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int world=s[0]-'0',stage=s[2]-'0';
    if(stage==8){
        world++;
        stage=1;
    }else{
        stage++;
    }
    cout<<world<<'-'<<stage<<endl;
    return 0;
}