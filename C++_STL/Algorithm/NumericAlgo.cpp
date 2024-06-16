#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    // vector<int> arr(5);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // int totalSUm = accumulate(arr.begin(), arr.end(), 0);
    // cout << totalSUm << endl;

    // vector<int> first;
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);
    // first.push_back(4);

    // vector<int> secand = {3, 4, 5};

    // int ans = inner_product(first.begin(), first.end(), secand.begin(), 0);
    // cout << ans << endl;

    // vector<int> result(first.size());
    // partial_sum(first.begin(), first.end(), result.begin());

    // for (int a : first)
    // {

    //     cout << a << " " << endl;
    // }

    vector<int> push(5);

    iota(push.begin(), push.end(), 250);

    for (int a : push)
    {
        cout << a << " " << endl;
    }

    return 0;
}