#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int slove(vector<int> &arr, int target, int i)
{
    // base case
    if (target < 0 || i == arr.size())
        return false;
    if (target == 0)
        return true;

    int inc = slove(arr, target - arr[i], i + 1);
    int exc = slove(arr, target, i + 1);

    return inc || exc;
}

int main()
{
    //!--- Partition Equal Subset Sum-----
    // vector<int> arr = {1, 5, 11, 5};
    // int sum = accumulate(arr.begin(), arr.end(), 0);
    // if ((sum % 2) != 0)
    //     cout << "Not Making ans" << endl; // when array sum is ood

    // int target = sum >> 1;
    // int ans = slove(arr, target, 0);
    // cout << ans << endl;

    //!-----Minimize the Difference Between Target and Chosen Elements---

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    

    return 0;
}