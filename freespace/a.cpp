#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;

    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    
    int M;
    cin>>M;

    int ans=0;
    while(M--)
    {
        int R,L;
        cin>>R>>L;
        R--;L--;

        if(L==R)
        {
            if(A[R]>=2)
            {
                A[R]-=2;
                ans++;
            }
        }
        else
        {
            if(A[R]>0&&A[L]>0)
            {
                A[R]--;A[L]--;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}