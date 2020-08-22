#include<bits/stdc++.h>
using namespace std;
long long int rev(long long int n)
{
    string s;
    stringstream st,i;
    st<<n;
    st>>s;
    reverse(s.begin(),s.end());
    i<<s;
    i>>n;
    return n;

}
int main()
{
    int c=1,t;
    long long int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n+=rev(n);
        if(n!=rev(n))
        {
            while(c++)
            {
                n+=rev(n);
                if((n==rev(n))||(n>4294967294)||c>999)break;
            }
        }
        cout<<c<<" "<<n<<endl;
        c=1;
    }
    return 0;
}
