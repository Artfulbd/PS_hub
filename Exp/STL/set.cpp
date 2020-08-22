#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
using namespace std;
struct classcomp
{
    bool operator() (const int& lhs, const int& rhs) const
    {
        return lhs<rhs;
    }
};
int main()
{
    set<int> first;                           // empty set of ints
    int myints[]= {10,20,30,40,50};
    set<int> second (myints,myints+5);        // range
    set<int> third (second);                  // a copy of second
    set<int> fourth (second.begin(), second.end());  // iterator .
    set<int,classcomp> fifth;                 // class as Compare.


    set <int, greater <int> > gquiz1;
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50);
    gquiz1.insert(10);

    set <int, greater <int> > :: iterator itr;
    cout << "\nThe set gquiz1 is : ";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout <<" "<< *itr;
    }
    cout << endl;

    // assigning the elements from gquiz1 to gquiz2
    set <int> gquiz2(gquiz1.begin(), gquiz1.end());
    // print all elements of the set gquiz2
    cout << "\nThe set gquiz2 after assign from gquiz1 is : ";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << " " << *itr;
    }
    cout << endl;
    // remove all elements up to 30 in gquiz2
    cout << "\ngquiz2 after removal of elements less than 30 : ";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << " " << *itr;
    }
    // remove element with value 50 in gquiz2
    int num;
    num = gquiz2.erase (50);
    cout << "\ngquiz2.erase(50) : ";
    cout << num << " removed \t" ;
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << " " << *itr;
    }
    cout << endl;
    //lower bound and upper bound for set gquiz1
    cout << "gquiz1.lower_bound(40) : "
         << *gquiz1.lower_bound(40) << endl;
    cout << "gquiz1.upper_bound(40) : "
         << *gquiz1.upper_bound(40) << endl;
    //lower bound and upper bound for set gquiz2
    cout << "gquiz2.lower_bound(40) : "
         << *gquiz2.lower_bound(40) << endl;
    cout << "gquiz2.upper_bound(40) : "
         << *gquiz2.upper_bound(40) << endl;


    return 0;
}
