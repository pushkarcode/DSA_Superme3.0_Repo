#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    //!------brute force like sort array and see adjcent
    vector<int> arr = {1, 3, 4, 2, 2};
    int n = arr.size();
    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         cout << "Duplicate found " << arr[i] << endl;
    //         break; // break as we found the first duplicate
    //     }
    // }

    //?--------optimal approach (viste index of each cell)---
    // int ans = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(arr[i]);
    //     if (arr[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }
    //     arr[index] *= -1;
    // }

    // cout << "Duplicate found " << ans << endl;

    //*------------more optimal(not change in array swap element )

    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << "Duplicate found " << arr[0] << endl;
    return 0;
}