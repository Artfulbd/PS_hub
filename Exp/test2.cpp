#include<bits/stdc++.h>
using namespace std;
#define gap cout<<"\n";
typedef long long ll;
typedef unsigned long long ull;
#define gap cout<<"\n";
#define gapp cout<<"\n\n";
#define memb(ar,sz) memset(ar, false, sz);
#define printAr(ar) for(auto i:ar)cout<<i<<" ";
#define printArn(ar,n) for(int i = 0;i < n; i++)cout<<ar[i]<<" ";
#define takein(ar, s) for(int i =0; i<s; i++)cin>>ar[i];
#define setV(ar ,value, sz) for(int i = 0 ; i<sz ; i++) ar[i] = value ;
#define MAX 10005
#define dicAr ar[1002]
#define lcm(a,b) ((a/__gcd(a,b))*b);
#define toBin(num) bitset<20>(num).to_string();  //change bit if needed
unsigned long long n = 	461168;



void SieveOfEratosthenes()
{
    bool prime[n];
    memset(prime, true, sizeof(prime));

    for (long long p=2; p*p<=n; p++)
    {
        printf("f_f :");
        if (prime[p] == true)
        {
            for (long long i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (long long p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
}

// Driver Program to test above function
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "<< " than or equal to " << n << endl;
    SieveOfEratosthenes();
    return 0;
}

