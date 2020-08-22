
#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 200005
#define ll long long
const ll mod = 1e9 + 7;

ll dp[1050][1050];          /// n > r

int main()
{

    ll mod = 1e9 + 7;
    int t,n,r;
    cin>>t;

    /*
    memset(dp, -1,sizeof(dp));
    for(int i = 1; i<=100; i++)
        for(int j = 1; j<=100; j++)nCr(i,j);

    for(int i = 0; i<t; i++)
    {
        cin>>n>>r;
        cout<<dp[n][r];gap
    }*/


    ///iterative way
    for(int i = 1; i<=100; i++)
    {
        dp[i][0] = 1;
        dp[i][i] = 1;
    }
    for(int i = 1 ; i<=100; i++)
        for(int j = 1; j <i; j++) dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;


    for(int i = 0; i<t; i++)
    {
        cin>>n>>r;
        cout<<dp[n][r];gap
    }



    return 0;
}

