#include <iostream>
using namespace std;
int main() 
{
    int x, y;cin >> x >> y;
    cout << ((x + y) % 12 == 0 ? 12 : (x + y) % 12) << endl;
    return 0;
}