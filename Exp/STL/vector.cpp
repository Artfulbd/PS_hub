#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;
int main()
{
    vector<int> first,g1;                                 // empty vector of ints
    vector<int> second (4,100);                       // four ints with value 100
    vector<int> third (second.begin(),second.end());  // iterating through second
    vector<int> fourth (third);                       // a copy of third
    int myints[] = {16,2,77,29};                       //from array
    vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

    cout << "The contents of fifth are:";
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it;
    gap

    g1.push_back(23);
    g1.push_back(3);
    g1.push_back(2);
    g1.push_back(6);
    g1.push_back(4);

    sort(g1.begin(),g1.end());
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i) /// same as cbegin
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) /// reverse  (same as crbegin)
        cout << *ir << " ";                            ///4 6 2 3 23

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
    g1.resize(4);
    cout << "\nSize : " << g1.size();
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
    cout << "\nat : g1.at(4) = " << g1.at(3);
    cout << "\nfront() : g1.front() = " << g1.front();
    cout << "\nback() : g1.back() = " << g1.back();

    int* pos = g1.data();
    cout << "\nThe first element is " << *pos;

    vector<int> v;
    v.assign(5, 10);// fill the array with 10 five times

    v.push_back(15);// inserts 15 to the last position
    int n = v.size();
    cout << "\nThe last element is : " << v[n - 1];
    v.pop_back();

    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)cout << v[i] << " ";

    v.insert(v.begin(), 5); // inserts 5 at the beginning
    cout << "\nThe first element is1: " << v[0];


    v.erase(v.begin());cout << "\nThe first element2: " << v[0];// removes the first element
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is3: " << v[0];

    v.emplace_back(20);  n = v.size(); // Inserts 20 at the end
    cout << "\nThe last element is: " << v[n - 1];

    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)cout << v1[i] << " ";
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
    v1.swap(v2); // Swaps v1 and v2

    ///After Swap
    ///Vector 1: 3 4
    ///Vector 2: 1 2
    return 0;
}

