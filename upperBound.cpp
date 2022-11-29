// Write a program to find a Upper bound.
#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int,int>mulMap;
    
    mulMap.insert(pair<int,int>(4,76));
    mulMap.insert(pair<int,int>(1,40));
    mulMap.insert(pair<int,int>(2,90));
    mulMap.insert(pair<int,int>(3,87));
    mulMap.insert(pair<int,int>(4,60));

    for(auto it = mulMap.begin();it != mulMap.end();it++){
       cout<<it->first<<"->"<<it->second<<endl;
    }

    cout<<endl;

    cout << "The upper bound of key 2 is ";
    auto it = mulMap.upper_bound(2);
    cout<<it->first<<"->"<<it->second<<endl;
    

    return 0;
}