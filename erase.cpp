#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int,int>m;

    m.insert(pair<int,int>(1,40));
    m.insert(pair<int,int>(2,98));
    m.insert(pair<int,int>(3,76));
    m.insert(pair<int,int>(4,65));
    
    cout<<"Before erase"<<endl;
    for(auto it = m.begin();it != m.end();it++){    
        cout<<it->first<<"->"<<it->second<<", ";
    }
    cout<<endl;

    cout<<"After Erase All Elements"<<endl;
    m.clear();

    if(m.empty())
       cout<<"MultiMap is empty"<<endl;
     
    return 0;
}