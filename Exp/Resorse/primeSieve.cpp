#include<bits/stdc++.h>
using namespace std;
void sieve(bool prime[],int n)
{
    for(int p=2 ; p*p<=n ; p++)
    {
        if(prime[p])
        {
            for(int i = p*p ; i <= n; i+=2*p)prime[i] = false;
        }
    }
}
int main()
{
    int till = 500;
    bool prime[till + 1];                                         ///declare N+1
    memset(prime,true,sizeof(prime));
    sieve(prime, till + 1);
    for(int i = 2;i <= till; i++)if(prime[i])cout<<i<<"\n ";    ///run till N
    return 0;
}
