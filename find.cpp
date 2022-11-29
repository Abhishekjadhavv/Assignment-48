// Write a program to find some key value pairs and print on the console.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, int> m;

    m.insert(pair<int, int>(1, 56));
    m.insert(pair<int, int>(2, 87));
    m.insert(pair<int, int>(3, 46));
    m.insert(pair<int, int>(4, 82));

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "->" << it->second << ", ";
    }

    cout << endl;

    auto it = m.find(3);

    if (it != m.end())
        cout <<"Exist "<<it->first << "->" << it->second << endl;
    else
        cout << "Not Exist" << endl;

    return 0;
}