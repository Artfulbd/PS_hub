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
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, h, i, j, m;
    string s;
    cin>>n;
    t = n;
    getchar();
    while(n--)
    {
        getline(cin,s);
        istringstream x(s);
        while(x>>h)v.push_back(h);
        m = h = 0;
        t = v.size();
        for(i = 0; i<t-1; i++)
        {
            for(j = i+1; j<t; j++)
            {
                h = __gcd(v[i],v[j]);
                m = max(h,m);
            }
        }
        cout<<m;gap
        v.clear();
    }
    return 0;
}
