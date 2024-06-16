#include <iostream>
#include <vector>
using namespace std;
int findPivat(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1, ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        // right or left
        else if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
}

int binartSearch(vector<int> &arr, int target, int s, int e)
{
    int n = arr.size();
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

int main()
{

    //! pivat element in moutain array
    // vector<int> arr = {10, 20, 70, 60, 50, 40, 30, 15, 5};
    // int n = arr.size();
    // int s = 0;
    // int e = n - 1, ans = -1;
    // int mid = s + (e - s) / 2;
    // while (s <= e)
    // {
    //     if (arr[mid] < arr[mid + 1])
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         ans = mid;
    //         e = mid-1;
    //     }
    //     mid = s + (e - s) / 2;
    // }
    // cout << ans << endl;

    //* find pivat Index

    //! Search in roated sorted array
    // vector<int> arr = {13, 14, 15, 16, 17, 18, 19, 11, 12};
    // int pivatIndex = findPivat(arr);
    // int n = arr.size();
    // int target = 16;
    // if (target >= arr[0] && target <= arr[pivatIndex])
    // {
    //     int ans = binartSearch(arr, target, 0, pivatIndex);
    //     cout << ans << endl;
    // }
    // else
    // {
    //     int ans = binartSearch(arr, target, pivatIndex + 1, n - 1);
    //     cout << ans << endl;
    // }

    //! Square root of a number
    // int x = 38;
    // int s = 0;
    // int e = x;
    // int ans = -1;
    // long long int mid = s + (e - s) / 2;
    // while (s <= e)
    // {
    //     long long int product = mid * mid;
    //     if (product == x)
    //     {
    //         return mid;
    //     }
    //     else if (x > product)
    //     {
    //         // may or may not my answer
    //         // store and compute
    //         ans = mid;
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid - 1;
    //     }
    //     mid = s + (e - s) / 2;
    // }
    // cout<<ans;

    //! search in 2d Array
    // vector<vector<int>> arr(4, vector<int>(4, 0));
    // int row = arr.size();
    // int col = arr[0].size();
    // int n = row * col;
    // int target = 10;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // int s = 0;
    // int e = n - 1;
    // int mid = s + (e - s) / 2;
    // while (s <= e)
    // {
    //     // actual mapping of 2d aeeay values
    //     int i = mid / col;
    //     int j = mid % col;
    //     if (arr[i][j] == target)
    //     {
    //         cout << "element Found" << endl;
    //         break;
    //     }
    //     else if (target > arr[i][j])
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid - 1;
    //     }
    //     mid = s + (e - s) / 2;
    // }

    return 0;
}