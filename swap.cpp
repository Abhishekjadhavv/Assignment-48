// Write a c++ code for illustration of multimap::swap() function.
#include <iostream>
#include <map>
using namespace std;

void showData(multimap<int, int> m)
{
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " -> " << it->second <<", ";
    }
}

int main()
{
    multimap<int, int> M1, M2;

    M1.insert(pair<int, int>(1, 45));
    M1.insert(pair<int, int>(2, 34));
    M1.insert(pair<int, int>(3, 25));
    M1.insert(pair<int, int>(4, 87));

    cout << "M1's Data" << endl;
    showData(M1);
    cout << endl;

    M2.insert(pair<int, int>(1, 65));
    M2.insert(pair<int, int>(2, 54));
    M2.insert(pair<int, int>(3, 78));
    M2.insert(pair<int, int>(4, 85));

    cout << "M2's Data" << endl;
    showData(M2);
    cout << endl;

    M1.swap(M2);

    cout << "After Swap M1's Data" << endl;
    showData(M1);
    cout << endl;

    cout << "After Swap M2's Data" << endl;
    showData(M2);
    cout << endl;



    return 0;
}