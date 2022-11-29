// Declare a multimap m1 of key-value pairs of integer type and then insert some pair
// type data. Now print the multimap values of m1, and also create another multimap
// m2 of the same type as m1 using m1.begin() and m1.end() as parameters.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, int> m1;

    m1.insert(pair<int, int>(4, 76));
    m1.insert(pair<int, int>(1, 40));
    m1.insert(pair<int, int>(2, 90));
    m1.insert(pair<int, int>(3, 87));
    m1.insert(pair<int, int>(4, 60));

    cout << "M1's Data" << endl;
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        cout << it->first << "->" << it->second << endl;
    }
    cout << endl;

    multimap<int, int> m2(m1.begin(), m1.end());
    cout << "M2's Data" << endl;
    for (auto it = m2.begin(); it != m2.end(); it++)
    {
        cout << it->first << "->" << it->second << endl;
    }
    cout << endl;
    return 0;
}