#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

int findPivat(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (s == e)
        {
            return s;
        }
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}
int binarySearch(vector<int> &arr, int target, int s, int e)
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
        mid = s + (e - s) / 2;
    }
}

int Qoutent(int dividend, int divisor)
{
    int ans = -1;
    int s = 0, e = dividend;
    while (s <= e)
    {
        int mid = s + ((e - s) >> 1);
        if (divisor * mid == dividend)
        {
            return mid;
        }
        else if (divisor * mid <= dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

bool kokoeating(vector<int> &arr, int h, int k)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += ceil(arr[i] / (double)k);
    }
    return sum <= h;
}

int main()
{

    // vector<int> arr = {13, 14, 15, 16, 17, 18, 11, 12};
    // int pivatIndex = findPivat(arr);
    // int n = arr.size();
    // int target = 11;
    // if (target >= arr[0] && target <= arr[pivatIndex])
    // {
    //     int ans = binarySearch(arr, target, 0, pivatIndex);
    //     cout << ans << endl;
    // }
    // else
    // {
    //     int ans = binarySearch(arr, target, pivatIndex + 1, n - 1);
    //     cout << ans << endl;
    // }

    // int x;
    // cout << "enter sqrt value: " << endl;
    // cin >> x;
    // int s = 0, e = x, ans = -1;
    // while (s <= e)
    // {
    //     int mid = s + (e - s) /2;
    //     if (mid * mid == x)
    //     {
    //         ans = mid;
    //         break;
    //     }
    //     else if (mid * mid < x)
    //     {
    //         ans = mid;
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid - 1;
    //     }
    // }

    // cout << ans << endl;

    // vector<vector<int>> arr(3, vector<int>(3, 0));
    // int row = arr.size();
    // int col = arr[0].size();

    // int n = row * col;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // int s = 0;
    // int e = n - 1;
    // int target = 4;
    // while (s <= e)
    // {
    //     int mid = s + e / 2;
    //     int i = mid / col;
    //     int j = mid % col;
    //     if (arr[i][j] == target)
    //     {
    //         cout << "Element found at index: " << mid << endl;
    //         return 0;
    //     }
    //     else if (target >= arr[i][j])
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid - 1;
    //     }
    // }

    // int dividend = 65;
    // int divisor = -5;

    // int ans = Qoutent(abs(dividend), abs(divisor));

    // if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    // {
    //     ans = 0 - ans;
    // }

    // cout << ans << endl;

    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans ^= arr[i];
    // }

    // cout << ans;

    // unordered_map<int, int> count;

    // for (int i = 0; i < n; i++)
    // {
    //     int num = arr[i];
    //     count[num]++;
    // }

    // auto it = count.begin();

    // while (it != count.end())
    // {
    //     int key = it->first;
    //     int value = it->second;
    //     if (value == 1)
    //     {
    //         cout << key << "";
    //     }
    //     it++;
    // }

    // with log n compexity

    // vector<int> arr = {1,1, 2, 2, 3, 3, 5, 5, 3, 3,8};
    // int n = arr.size();

    // int s = 0, e = n - 1;
    // int ans = -1;
    // while (s <= e)
    // {
    //     int mid = s + (e - s) / 2;
    //     // case: 1
    //     if (s == e)
    //     {
    //         ans = arr[s];
    //         break;
    //     }

    //     // case: 2 no dupicate
    //     int currval = arr[mid];
    //     int leftval = -1;
    //     if (mid - 1 >= 0)
    //         leftval = arr[mid - 1];
    //     int rightval = -1;
    //     if (mid + 1 < n)
    //         rightval = arr[mid + 1];

    //     if (currval != rightval && currval != leftval)
    //     {
    //         ans = currval;
    //         break;
    //     }
    //     // case: 3 duplicate left side
    //     if (currval == leftval && currval != rightval)
    //     {
    //         int index = mid - 1;
    //         if (index & 1)
    //         {
    //             e = mid - 1;
    //         }
    //         else
    //         {
    //             s = mid + 1;
    //         }
    //     }
    //     // case: 3 duplicate right side
    //     if (currval == rightval && currval != leftval)
    //     {
    //         int index = mid;
    //         if (index & 1)
    //         {
    //             e = mid - 1;
    //         }
    //         else
    //         {
    //             s = mid + 1;
    //         }
    //     }
    // }

    // cout << ans;

    // int sqrt = 54;
    // double s = 0, e = sqrt, ans = -1;

    // while ((e - s) > 0.00000001)
    // {
    //     double mid = (s + e) / 2.0;
    //     double square = mid * mid;
    //     if (square <= sqrt)
    //     {
    //         ans = mid;
    //         s = mid + 0.00000001;
    //     }
    //     else
    //     {
    //         e = mid - 0.00000001;
    //     }
    // }

    // printf("%.15f\n", ans);

    // koko loves to eat banana

    // vector<int> arr = {30, 11, 23, 4, 20};
    // int n = arr.size();
    // int s = 0;
    // int h = 5, ans = -1;
    // int e = *max_element(arr.begin(), arr.end());

    // while (s <= e)
    // {
    //     int mid = s + (e - s) / 2;
    //     if (kokoeating(arr, h, mid))
    //     {
    //         ans = mid;
    //         e = mid - 1;
    //     }
    //     else
    //     {
    //         s = mid + 1;
    //     }
    // }

    // cout << ans;

    vector<int> arr = {44, 33, 55, 22, 11};
    int n = arr.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < (n - i - 1); j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //             swap(arr[j], arr[j + 1]);
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int minidx = i;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] < arr[minidx])
    //         {
    //             minidx = j;
    //         }
    //     }
    //     swap(arr[i], arr[minidx]);
    // }




    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}