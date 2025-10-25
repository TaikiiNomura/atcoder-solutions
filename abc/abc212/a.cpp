#include <iostream>
using namespace std;
int main()
{
    int A, B; cin >> A >> B;
    string ans = "";
    if(0 < A && B == 0) ans = "Gold";
    else if(A == 0 && 0 < B) ans = "Silver";
    else ans = "Alloy";
    cout << ans << endl;
    return 0;
}