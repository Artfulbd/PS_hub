#include<bits/stdc++.h>
using namespace std;
#define gap cout<<"\n";
#define gapp cout<<"\n\n";
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define takein(ar, s) for(int i =0; i<s; i++)cin>>ar[i];
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 200005
#define dicAr ar[1002]
vector<int>weight;
vector<int>price;
int dp[MAX][MAX];
int n, r1, r2;
memset(dp,-1,sizeof(dp));
int  kNap(int idx, int rcap)
{
    if(dp[idx]!=-1) return dp[idx];
    if(idx == n+1 ) return dp[n] = 0;
    r2 = 0;
    r1 = kNap(idx+1, rcap)
    if(rcap-weight[idx] >= 0) r2 = kNap(idx+1, rcap - weight[idx]);
    return dp[idx] = max(r1, r2);
    return 0;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, i, hold;
    cin>>n>>p;
    for(i = 0; i<n; i++)
    {
        cin>>hold;
        weight.push_back(hold);
    }
    for(i = 0; i<p; i++)
    {
        cin>>hold;
        price.push_back(hold);
    }

    return 0;
}

