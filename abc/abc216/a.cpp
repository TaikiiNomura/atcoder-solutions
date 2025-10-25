#include <iostream>
using namespace std;
int main()
{
    double in; cin >> in;
    int X = (int)in;
    double Y = (in - X) * 10.0;
    // cout << X << ' ' << Y << endl;
    if(Y < 3)
    {
        cout << X << '-' << endl;
        return 0;
    }
    else if(Y < 7)
    {
        cout << X << endl;
        return 0;
    }
    else
    {
        cout << X << '+' << endl;
        return 0;
    }
}