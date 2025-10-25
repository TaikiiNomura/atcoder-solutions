#include <iostream>
using namespace std;
int main()
{
    int N; cin >> N;
    if(N < 126)
    {
        cout << 4 << endl;
        return 0;
    }
    else if(N < 212)
    {
        cout << 6 << endl;
        return 0;
    }
    else
    {
        cout << 8 << endl;
        return 0;
    }
}