#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 200005
#define ll long long
ll dp[MAX];

int main()
{
    ll m = 1e9+7;
    int n, t;
    dp[0] = 1;
    for(int i =  1;i <=100; i++)
    {
        dp[i] = (i * dp[i-1]) % m;
    }
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        cin>>n;
        cout<<dp[n];gap

    }



    return 0;
}

