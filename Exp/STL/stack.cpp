#include <iostream>
#include <stack>
#include<bits/stdc++.h>
using namespace std;
#define gap cout<<endl;
#define gapp cout<<endl<<endl;

void showstack(stack <int> gq)
{
    stack <int> g = gq;
    while (!g.empty())
    {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main ()
{
    stack <int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(1);
    gquiz.push(5);

    cout << "The stack gquiz is : ";
    showstack(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showstack(gquiz);


    stack<int> foo,bar;
    foo.push (10);
    foo.push(20);
    foo.push(30);
    bar.push (111);
    bar.push(222);

    swap(foo,bar);
    cout << "size of foo: " << foo.size() <<endl;
    cout << "size of bar: " << bar.size() <<endl;

    return 0;
}

