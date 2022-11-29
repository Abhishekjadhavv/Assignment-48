// Write a program to erase only a single value based on position.
#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int,int>m;

    m.insert(pair<int,int>(1,59));
    m.insert(pair<int,int>(2,78));
    m.insert(pair<int,int>(3,90));
    m.insert(pair<int,int>(4,35));

    for (auto it = m.begin(); it != m.end(); it++)
    {  
        cout<<it->first<<"->"<<it->second<<", ";
    }

    cout<<endl;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<"->"<<it->second<<", ";
    }

    cout<<endl;

     
    return 0;
}