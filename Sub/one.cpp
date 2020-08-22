#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define gap cout<<"\n";
#define gapp cout<<"\n\n";
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define takein(ar, s) for(int i =0; i<s; i++)cin>>ar[i];
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 10005
#define dicAr ar[1002]
#define lcm(a,b) ((a/__gcd(a,b))*b);
int main()
{
    int n;
    cin>>n;
    if(n>0&&n<500001)
    {
        vector<int> v;
        int h;
        for(int i=0;i<n;i++){
                cin>>h;
                if(h>0&&h<5000000001)v.push_back(h);
                else continue;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)cout<<v[i]<<" ";
    }
}
