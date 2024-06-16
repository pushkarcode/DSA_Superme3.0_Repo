#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int> secand;
    secand.push_back(3);
    secand.push_back(6);
    secand.push_back(7);
    secand.push_back(9);

    vector<int> result;

    set_intersection(first.begin(), first.end(), secand.begin(), secand.end(), inserter(result, result.begin()));

    for (int p : result)
    {
        cout << p << " ";
    }
    cout << endl;

    set_union(first.begin(), first.end(), secand.begin(), secand.end(), inserter(result, result.begin()));

    for (int a : result)
    {
        cout << a << " ";
    }

    // set_difference
    // set_symmetric_difference

    return 0;
}