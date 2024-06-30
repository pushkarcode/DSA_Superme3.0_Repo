#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool myComp(int &a, int &b)
{
    // return a > b; //increasing
    return a < b; //decreasing

}
int main()
{
    vector<int> arr = {44, 12, 33, 55, 78, 12, 1};

    // sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), myComp);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}