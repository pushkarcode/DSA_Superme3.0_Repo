#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// bool twoSum(vector<int> &arr, int x)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool twoSum__Optimized(vector<int> &arr, int x)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s < e)
    {
        int csum = arr[s] + arr[e];
        if (csum == x)
            return true;

        else if (csum > x)
            e--;
        else
            s++;
    }

    return false;
}

int main()
{

    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 16;

    // bool ans = twoSum(arr, target);
    // if (ans)
    // {
    //     cout << "Yes";
    // }
    // else
    // {
    //     cout << "No";
    // }

    //! efficient way

    sort(arr.begin(), arr.end());

    bool ans = twoSum__Optimized(arr, target);
    if (ans)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}