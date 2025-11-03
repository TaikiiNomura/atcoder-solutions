#include<iostream>
#include<string>
#include<vector>
using namespace std;
int n, x;
string y;
int main() 
{
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++)cin >> s[i];
    cin >> x >> y;
    if(s[x - 1] == y) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}