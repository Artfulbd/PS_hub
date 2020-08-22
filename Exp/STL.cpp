/*#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<queue>*/


#include <bits/stdc++.h>
using namespace std;
#define gap cout<<endl<<endl;

int main()
{

    int test[5]= {52,4,36,58,7};
    for(int i=0; i<5; i++)cout<<*(test+i)<<" ";


    cout<<"\n Vector: ";
    vector<int> v;
    v.push_back(12);
    v.push_back(9);
    v.push_back(14);
    v.push_back(15);
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    reverse( v.begin(), v.end() );
    cout<<endl;
    cout<<" Reverse vector: ";                       ///reverse
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";


    cout<<"\n\n stack: ";
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


    cout<<"\n\n queue: ";
    queue <int> q,r;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    r=q;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n Copied queue r: " ;
    while(!r.empty())
    {
        cout<<r.front()<<" ";
        r.pop();
    }



    cout<<"\n\n priority queue: ";
    priority_queue<int> pq;
    pq.push(10);
    pq.push(19);
    pq.push(6);
    pq.push(9);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<"\n\n iterator: ";
    /*vector< int > v;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );*/
    vector< int > :: iterator i;
    for( i = v.begin(); i < v.end(); i++ )
    {
        printf("%d ", *i);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";



    map<int, int> sr;
    sr[0]=1;
    sr[1]=1200;
    sr[2]=100;
    cout<<endl<<sr[2]<<endl;

    deque<int> p;
    deque<int> ::iterator ite;
    p.push_back(32);
    p.push_back(97);
    p.push_front(963);
    cout<<"deque: ";
    for( ite = p.begin(); ite < p.end(); ite++ )printf("%d ", *ite);
    cout<<"\ndeque: ";
    p.pop_back();
    for( ite = p.begin(); ite < p.end(); ite++ )printf("%d ", *ite);
    p.pop_front();
    cout<<"\ndeque: ";
    for( ite = p.begin(); ite < p.end(); ite++ )printf("%d ", *ite);


    gap
    list<int> l;
    l.push_back(10);
    l.push_front(32);
    l.push_back(66);
    l.push_front(299);
    for(int i:l)cout<<i<<" ";
    gap
    //sort(l.begin(),l.end());  ///cannot
    for(int i:l)cout<<i<<" ";


    return 0;
}


