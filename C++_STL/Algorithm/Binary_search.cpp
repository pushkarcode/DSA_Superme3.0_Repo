#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    int target = 400;
    auto it = upper_bound(arr.begin(), arr.end(), target);

    // auto it = lower_bound(arr.begin(), arr.end(), target);

    // auto it = equal_range(arr.begin(), arr.end(), target);

    cout << *it << endl;

    return 0;
}