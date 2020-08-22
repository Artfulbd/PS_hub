//UVA - 11677
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    cin>>h1>>m1>>h2>>m2;
    while(h1+h1+m1+m2!=0)
    {   if(h1==h2)
        {
            if(m2>=m1)cout<<m2-m1;
            else cout<<1440-(m1-m2);
        }
        else if(h1<h2)cout<<(h2*60+m2)-(h1*60+m1);
        else cout<<((23-h1)*60+(60-m1))+(h2*60+m2);
        cout<<endl;
        cin>>h1>>m1>>h2>>m2;
    }
    return 0;
}

