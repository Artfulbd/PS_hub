#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
typedef struct student
{
    string name;
    int id;
}st;
bool cmp(st a, st b)
{
    if(a.id < b.id) return true;
    else return false ;
}
int main()
{
    st ar[5];
    ar[0].id = 178;
    ar[0].name = " Tumi ";
    ar[1].id = 172;
    ar[1].name = " Amr ";
    ar[2].id = 189;
    ar[2].name = " Se ";
    ar[3].id = 162;
    ar[3].name = " Ami ";
    ar[4].id = 179;
    ar[4].name = " Tumar ";

    for(auto hold: ar)
    {
        cout<<"ID : "<<hold.id<<" Name: "<<hold.name<<endl;
    }
    sort(ar, ar+5 , cmp);
    gapp
    for(auto hold: ar)
    {
        cout<<"ID : "<<hold.id<<" Name: "<<hold.name<<endl;
    }
    return 0;
}

