#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int bs(vector<int> &arr, int start, int x)
{
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int diff = 2;
    vector<vector<int>> result;

    //!----------Brute force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (abs(arr[i] - arr[j]) == diff)
    //         {
    //             result.push_back({arr[i], arr[j]});
    //             break; // Break inner loop as pair found
    //         }

    //     }
    // }

    // for (int i = 0; i < result.size(); i++)
    // {
    //     for (int j = 0; j < result[0].size(); j++)
    //     {
    //         cout << result[i][j] << endl;
    //     }
    // }

    // //!-----------two pointer approch----------
    // sort(arr.begin(), arr.end()); // Sort array for efficient search
    // int left = 0, right = 1;
    // int count = 0;
    // while (right < n)
    // {
    //     if (arr[left] - arr[right] == diff)
    //     {
    //         count++;
    //         left++;
    //         right++;
    //     }
    //     else if (arr[left] - arr[right] < diff)
    //     {
    //         left++;
    //     }
    //     else
    //     {
    //         right++;
    //     }
    // }
    // cout << "Number of pairs with difference " << diff << ": " << count << endl;

    //?----------------optimized approch

    // sort(nums.begin(), nums.end());
    // set<pair<int, int>> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     if (bs(nums, i + 1, nums[i] + k) != -1)
    //     {
    //         ans.insert({nums[i], nums[i] + k});
    //     }
    // }
    // return ans.size();

    return 0;
}