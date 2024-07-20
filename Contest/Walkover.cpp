#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <limits.h>
using namespace std;

// vector<int> topKFrequent(vector<int> &nums,int k) {
//     //count frequency

// }

int main()
{

    // vector<int> nums = {1, 1, 1, 2, 2, 3};
    // int k = 1;

    // unordered_map<int, int> freqMap;
    // for (int num : nums)
    // {
    //     freqMap[num]++;
    // }

    // priority_queue<pair<int, int>> pq;
    // for (auto it = freqMap.begin(); it != freqMap.end(); ++it)
    // {
    //     pq.push(make_pair(it->second, it->first));
    // }

    // vector<int> result;
    // for (int i = 0; i < k; ++i)
    // {
    //     result.push_back(pq.top().second);
    //     pq.pop();
    // }

    // cout << "Example 1 Output: ";
    // for (int num : result)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    //? leders in array

    // int arr[6] = {10, 22, 12, 3, 0, 6};

    // int n = sizeof(arr) / sizeof(arr[0]);

    //! brute navi apptoch t(c) - n^2 and space kind n
    // vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     int leader = true;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if (leader == true)
    //     {
    //         ans.push_back(arr[i]);
    //     }
    // }

    // for (auto &&i : ans)
    // {
    //     cout << i << " ";
    // }

    //! optimal way

    // vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> arr = {17, 8, 12, 55, 0, 18};

    int n = arr.size();

    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }

    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}