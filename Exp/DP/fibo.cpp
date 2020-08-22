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
ll fib[MAX];
int f(int n)
{
    if(n <= 2) return 1;
    if(fib[n]!=0) return fib[n];
    return fib[n] = f(n-1) + f(n-2);
}

int main()
{
    ll m = 1e9+7;
    int n;
    while(cin>>n)
    {
        printf("The Fibonacci number for %d is %ld\n",n, fib(n));
    }
    return 0;
}

