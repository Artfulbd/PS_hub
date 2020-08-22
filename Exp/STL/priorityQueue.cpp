#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue <int,vector<int>,greater<int>> gq)
{
    priority_queue <int,vector<int>,greater<int>> g = gq;
    while (!g.empty())
    {
        cout << " " << g.top();
        g.pop();
    }
    cout <<endl;
}
int main ()
{
    priority_queue <int,vector<int>,greater<int>> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(1);
    gquiz.push(5);

    cout << "The priority queue gquiz is : ";
    showpq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);


    priority_queue<int> foo,bar;
    foo.push (15);
    foo.push(30);
    foo.push(10);
    bar.push (101);
    bar.push(202);

    foo.swap(bar);
    //bar.swap(foo); //same as previous
    cout << "size of foo: " << foo.size() <<endl;
    cout << "size of bar: " << bar.size() <<endl;

    return 0;
}
