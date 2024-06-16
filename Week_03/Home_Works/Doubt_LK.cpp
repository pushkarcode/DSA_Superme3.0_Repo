#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main()
{
    // find_Unique()
    // vector<int> arr = {1, 3, 4};
    // vector<int> arr2 = {1, 3, 4};
    // int n = arr.size();
    // int m = arr2.size();
    // int cnt = 0;
    // int k  = 2;
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0  ; j < m; ++j)
    //     {
    //         if (arr[i] % (arr2[j] * k) == 0)
    //         {
    //             cnt++;
    //         }
    //     }
    // }

    // cout << cnt << endl;

    // ! another way to find unique elemnts

    // vector<int> arr = {1, 2, 4, 1, 2, 3, 4};
    // int n = arr.size();
    // sort(arr.begin(), arr.end());
    // int i = 0;
    // int ans = -1;
    // while (i < n)
    // {
    //     if (i + 1 < n && arr[i] == arr[i + 1])
    //     {
    //         i += 2;
    //     }
    //     else
    //     {
    //         ans = arr[i];
    //         break;
    //     }
    // }
    // cout << ans << " " << endl;

    // !sort 0's and 1's another way (two pointers)

    // vector<int> arr = {0, 1, 1, 0, 0, 1, 1, 0, 1};
    // int n = arr.size();

    // int low = 0, high = n - 1;
    // while (low < high)
    // {
    //     if (arr[low] == 1 && arr[high] == 0)
    //     {
    //         swap(arr[low], arr[high]);
    //         low++;
    //         high--;
    //     }
    //     else if (arr[low] == 0)
    //     {
    //         low++;
    //     }
    //     else if (arr[high] == 1)
    //     {
    //         high--;
    //     }
    // }

    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }

    // * another way to rotate array usign (reverse method)
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int n = 7;
    // int shift = 1;
    // shift = shift % n;

    // // reverse all array
    // reverse(arr, 0, n - 1);
    // // reverse k element
    // reverse(arr, 0, shift - 1);
    // reverse last n-k elemet
    // reverse(arr, shift, n - 1);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    // ! How to use fill in 2-D array
    
    int arr[4][3] = {{1,2,3},{5,6,7},{9,10,11},{12,13,14}};

    // fill
    fill(&arr[0][0], &arr[0][0] + (4 * 3), -1);

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}