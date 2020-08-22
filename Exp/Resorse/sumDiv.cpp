#include<bits/stdc++.h>
using namespace std;
int sumDiv(int n)
{
    int sum = 1,n1 = n;
    for(int k = 2; k*k<=n ; ++k)
    {
        int p=1;
        while(n % k == 0)
        {
            p = p*k+1;
            n /= k;
        }
        sum *= p;
    }
    if(n>1)sum *= 1+n;
    //return sum;  ///if all divisor
    return sum - n1; ///if proper divisor

}
int countDiv(int n)
{
    int cnt = 2, n1 = sqrt(n);
    for (int i = 2; i<=n1 ; i++) {
        if (n%i==0){
            // If divisors are equal,
            // count only one
            if (n/i==i)cnt++;
            //if (n==i*i)cnt++;
            else cnt = cnt + 2;// Otherwise count both
        }
    }
    return cnt;
}
void printDiv(int n)
{
    int n1 = sqrt(n);
    for (int i=2; i<=n1; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)cout<<i<<' ';
            else cout<<i<<' '<<n/i<<' ';
        }
    }
}
int main()
{
    int t;
    cout<<sumDiv(10)<<endl;
    cout<<countDiv(12)<<endl;
    cout<<countDiv(78)<<endl;
    printDiv(200);
    return 0;
}
