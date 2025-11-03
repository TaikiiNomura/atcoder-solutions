#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
int main()
{
	string s;cin>>s;
	if(s=="red"){
		cout<<"SSS"<<endl;
	}
	else if(s=="blue"){
		cout<<"FFF"<<endl;
	}
	else if(s=="green"){
		cout<<"MMM"<<endl;
	}else{
		cout<<"Unknown"<<endl;
	}
}
