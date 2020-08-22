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
    int i,n, temp, max, cases = 0;
    struct task hold;
    scanf("%d",&i);
    while(i != 0)
    {
        n = i;
        while(i--)
            scanf("%d %d", &soldier[i].brief, &soldier[i].job);
        for (i = 1; i < n; i++)
        {
            hold = soldier[i];
            temp = i - 1;
            while (temp >= 0 && soldier[temp].job < hold.job)
            {
                soldier[temp+1] = soldier[temp];
                --temp;
            }
            soldier[temp+1] = hold;
        }
        i = max = temp = 0;
        while(i < n)
        {
            temp += soldier[i].brief;
            max = max < (temp+soldier[i].job) ? (temp+soldier[i].job) : max;
            i++;
        }
        printf("Case %d: %d\n", ++cases, max);
        scanf("%d",&i);

    }
    return 0;
}
