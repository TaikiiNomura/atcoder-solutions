#include<iostream>
using namespace std;
int main()
{
	int s,a,b,x;
	cin>>s>>a>>b>>x;
	int time=x/(a+b);
	int rtime=x%(a+b);
	cout<<s*a*time+s*min(rtime,a)<<endl;
	return 0;
}