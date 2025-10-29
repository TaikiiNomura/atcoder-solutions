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
    int ans=0;
    while(N--)
    {
        int R,L;
        cin>>R>>L;
        R--;L--;
        if(A[R]>0&&A[L]>0)
        {
            ans++;
            A[R]--;A[L]--;
        }
        for(int i=0;i<N;i++)cout<<A[i]<<(i==N-1?'\n':' ');
    }
    cout<<ans<<endl;
}