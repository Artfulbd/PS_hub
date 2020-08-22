#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
using namespace std;
void printMap(map <int, int> gquiz1)
{
    /*map <int, int> :: iterator itr;
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout<<'\t'<< itr->first<<'\t'<< itr->second <<endl;
    }*/
              ///  OR ,
    for (auto& x: gquiz1)
    {
        cout<<'\t'<< x.first<<'\t'<< x.second <<endl;
    }
    cout << endl;
}
int main()
{
    map<string,int> mymap = {{ "alpha", 0 },{ "beta", 0 },{ "gamma", 0 } };
    mymap.at("alpha") = 10;
    mymap.at("beta") = 20;
    mymap["gamma"] = 30;

    for (auto& x: mymap)
    {
        cout << x.first << ": " << x.second << '\n';
    }

    map <int, int> gquiz1;        // empty map container
    gquiz1.insert(pair <int, int> (1, 40));
    gquiz1.insert(pair <int, int> (2, 30));
    gquiz1.insert(pair <int, int> (3, 60));
    gquiz1.insert(pair <int, int> (4, 20));
    gquiz1.insert(pair <int, int> (5, 50));
    gquiz1.insert(pair <int, int> (6, 50));
    gquiz1.insert(pair <int, int> (7, 10));

    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    printMap(gquiz1);

    // assigning the elements from gquiz1 to gquiz2
    map <int, int> gquiz2(gquiz1.begin(), gquiz1.end());
    cout << "The map gquiz2 after assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    printMap(gquiz2);
    // remove all elements up to element with key=3 in gquiz2
    cout << "gquiz2 after removal of elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    printMap(gquiz2);


    int num;                    // remove all elements with key = 4
    num = gquiz2.erase (4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n" ;
    cout << "\tKEY\tELEMENT\n";
    printMap(gquiz2);

    //lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : " << " KEY = ";
    cout << gquiz1.lower_bound(5)->first <<" ";
    cout << " ELEMENT = " << gquiz1.lower_bound(5)->second << endl;
    cout << "gquiz1.upper_bound(5) : " << " KEY = ";
    cout << gquiz1.upper_bound(5)->first <<" ";
    cout << " ELEMENT = " << gquiz1.upper_bound(5)->second << endl;

    return 0;
}
