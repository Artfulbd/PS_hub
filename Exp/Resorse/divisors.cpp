///divisors from a to b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k,ans=0;
    cin>>k>>a>>b;
    if(a<=0&&b>=0)
    {
        a =- a;
        ans = 1+(a/k)+(b/k);
    }
    else if(a<=0&&b<=0)
    {
        a=-a;
        b=-b;
        swap(a,b);
        ans=(b/k)-(a-1)/k;
    }
    else ans=(b/k)-(a-1)/k;
    cout<<ans<<endl;
    return 0;
}
