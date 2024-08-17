#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //!--------(move all negative numbers to one side)--------!

    //?---------sort method
    //*---------brute(navie approch) t(c) - O(n) s(c) - O(n)

    vector<int> arr = {1, 2, -3, 4, -5, 6};
    int n = arr.size();
    // vector<int> temp;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] < 0)
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }

    // for (auto &&i : temp)
    // {
    //     cout << i << " ";
    // }

   //!----------better approch
   
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}