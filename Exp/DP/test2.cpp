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
unsigned long ar[1000000];
unsigned long a, b, c, d, e, f;
unsigned long fn(unsigned long n ) {
    if(ar[n]!= -1)return ar[n];
    ar[n] = fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
    return ar[n] %=10000007;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n;
    int caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(ar, -1, sizeof(ar));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        ar[0] = a;
        ar[1] = b;
        ar[2] = c;
        ar[3] = d;
        ar[4] = e;
        ar[5] = f;
        printf("Case %d: %ld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}

