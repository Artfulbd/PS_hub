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
#define toBin(num) bitset<10>(num).to_string();  //change bit if needed
struct task
{
    int brief,job;
} soldier[1005];

int main()
{
    //freopen("output.txt","w", stdout);
    int start = 10, q1 = -4, r1 = 1, r2 = 1;
    float f_q1 = ((9 * pow(10,9)) * (q1 * pow(10, -6))) / r1 * r1;
    cout<<f_q1;
    return 0;
}
