#include <iostream>
#include<iomanip>
using namespace std;
// int main()
// {
//     cin.tie(nullptr);
//     ios::sync_with_stdio(false);
//     int A, B; cin >> A >> B;
//     cout << fixed << setprecision(6) << endl;
//     cout << (double)(A + 2*B) / 3 << endl;
//     return 0;
// }
signed main()
{
    int A, B; cin >> A >> B;
    double C = (A - B) / 3.0 + B;
    cout << C << endl;
    return 0;
}