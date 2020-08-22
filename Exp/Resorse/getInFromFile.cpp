#include<bits/stdc++.h>
using namespace std;
void check()
{
    string s;
    getline(cin,s);
    stringstream st(s);
    int h,mx=0;
    vector<int> v;
    while(st>>h)v.push_back(h);
    mx=abs(__gcd(v[0],v[1]));

    for(int j,i=0; i<v.size()-1; i++)
    {
        for(j=i+1; j<v.size(); j++)
        {
            if(i!=j)
            {
                h=abs(__gcd(v[i],v[j]));
                if(h>mx)mx=h;
            }
        }
    }
    cout<<mx<<endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("dfdf.txt", "w", stdout);
    int t;
    cin >> t;
    getchar();
    //cout << t << endl;
    while(t--)
    {
        check();
    }
    return 0;
}

