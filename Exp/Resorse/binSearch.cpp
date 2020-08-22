#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl<<endl;
#define gap1 cout<<endl;
bool bSeach(int *p, int &x,int size)
{
    int first = 0, last = size-1, mid;
    gap
    while(first <= last)
    {
        mid = first + (last - first) /2;    ///{21, 24 ,41 , 47, 84 ,96};
        if(x > p[mid])first = mid + 1;
        else if(x < p[mid])last = mid - 1;
        else
        {
            x = mid;
            return true;
        }
    }
    return false;
}
int main()
{
    int h, i=0, v[] = {21, 24,41, 47, 84,96};
    //while(i<5)cin>>v[i++];
    sort(v,v+6);
    cout<<" You entered: ";
    for(int h:v)cout<<h<<" ";
    gap
    cout<<" Enter number to search : ";
    //cin>>h;
    h=84;
    gap
    if(bSeach(v,h,6))cout<< " Found at index " << h;
    else cout<< " Not found.";
    gap1;
    return 0;
}
