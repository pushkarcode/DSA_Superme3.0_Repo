// #include <iostream>
// using namespace std;

// n
// int main()
// {
//     int n;
//     cin >> n;
//     if (n & 1)
//     {
//         cout << "Odd" << endl;
//     }
//     else
//     {
//         cout << "Even" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <limits.h>
#include <map>
#include <unordered_map>
using namespace std;

void Party()
{
    cout << "party" << endl;
}

void Study()
{
    cout << "study" << endl;
}

//! coustom namepsace;
namespace Pushkar
{
    void Party()
    {
        cout << "party" << endl;
    }
}

int main()
{
    // Party();
    // Study();
    // Pushkar::Party();
    // int n;
    // cin >> n;
    // int ans = 0;
    // int count = 0;
    // while (n)
    // {
    //     int rev = n % 10;
    //     if (rev == 1)
    //         count++;
    //     ans = ans * 10 + rev;
    //     n /= 10;
    // }

    // cout << ans << endl;
    // cout << count << endl;

    // int count = 0;
    // while (n)
    // {
    //     int setbit = n % 2;
    //     if (setbit == 1)
    //         count++;
    //     n = n / 2;
    // }
    // cout << count << endl;
    // int k = 2;
    // int mask = 1 << k;
    // int ans = n | mask;
    // cout << ans << endl;

    // int arr[8];
    // fill(arr, arr + 8, 7);

    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }

    // int a = sizeof(arr);
    // int b = sizeof(int);
    // int c = a / b;
    // cout << c << "";

    // int n;
    // cin >> n;

    // int Digit = 0, i = 0;
    // while (n>0)
    // {
    //     int bit = n % 10;
    //     Digit = Digit + bit * pow(2, i++);
    //     n /= 10;
    // }

    // cout << "Hamari digit:"<< Digit << endl;

    // int binary = 0, i = 0;
    // while (n)
    // {
    //     int bit = n & 1;
    //     binary = binary + bit * pow(10, i++);
    //     n = n >> 1;
    // }

    // cout << "Binary digit:" << binary << endl;

    //!-----------------Array Practice-------------

    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    // int key = 4;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if(arr[i] == key){
    //         cout << "Element found at index: " << i << endl;
    //         break;
    //     }
    // }
    // int maxi = INT_MAX;
    // for (size_t i = 0; i < arr.size(); i++)
    // {
    //     // if (arr[i] < maxi)
    //     // {
    //     //     maxi = arr[i];
    //     // }
    //     maxi = min(maxi, arr[i]);
    // }\    // cout << maxi << endl;

    // int i = 0;
    // int j = arr.size();
    // while (i < j)
    // {
    //     swap(arr[i++], arr[j--]);
    // }
    // for (auto &&i : arr)
    // {
    //     cout << i << " " << endl;
    // }

    // reverse(arr.begin(), arr.end());
    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }
    // int i = 0;
    // int j = arr.size() - 1;
    // while (i <= j)
    // {

    //     if (i == j)
    //     {
    //         cout << arr[i] << " ";
    //         break;
    //     }

    //     cout << arr[i] << "";
    //     i++;
    //     cout <<" "<< arr[j] << " ";
    //     j--;
    // }

    // vector<int> arr = {1, 1, 2, 2, 3, 4, 3};
    // int n = arr.size();

    // int push = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     push ^= arr[i];
    // }

    // cout << "unique element will be:" << push << endl;

    // int i = 0;
    // int j = arr.size() - 1;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             arr[i] = 0;
    //             arr[j] = 0;
    //             break;
    //         }
    //     }
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         cout << arr[i] << " ";
    //         break;
    //     }
    // }

    // sort(arr.begin(), arr.end());
    // int i = 0;
    // int j = n - 1;
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

    // cout << ans << endl;

    // unordered_map<int, int> freqMap;

    // for (int i = 0; i < n; i++)
    // {
    //     int num = arr[i];
    //     freqMap[num]++;
    // }

    // auto it = freqMap.begin();
    // int ans = -1;
    // while (it != freqMap.end())
    // {
    //     int key = it->first;
    //     int value = it->second;
    //     if (value == 1)
    //     {
    //         ans = key;
    //         break;
    //     }
    //     it++;
    // }

    // cout << ans;

    // vector<int> arr = {10, 20, 30, 40, 50, 60};
    // int n = arr.size();
    // first method

    // int shift = 2;
    // shift = shift % n;

    // if (shift == 0)
    //     return 0;

    // // ! step -1 copy last shift element to temp array
    // int temp[1000];
    // int index = 0;
    // for (int i = n - shift; i < n; i++)
    // {
    //     temp[index] = arr[i];
    //     index++;
    // }
    // // ! step -2 shift array elements by final shift element
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (i - shift >= 0)
    //     {
    //         arr[i] = arr[i - shift];
    //     }
    // }

    // //! step -3 copy temp array to original array
    // for (int i = 0; i < shift; i++)
    // {
    //     arr[i] = temp[i];
    // }

    //? sedand method
    // int k = 8;
    // k = k % n;

    // reverse(arr.begin(), arr.end());

    // reverse(arr.begin(), arr.begin() + k);

    // reverse(arr.begin() + k, arr.end());

    //     for (auto &&i : arr)
    //     {
    //         cout << i << " ";
    //     }

    // cout << shift << " " << endl;

    // for (int i = 0; i < shift; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         cout <<"("<< arr[i] << ","<< arr[j]<<")"<<" ";
    //     }
    //     cout << endl;
    // }

    //*-------golu

    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    // };

    // vector<vector<int>> arr(3, vector<int>(3, 0));

    // int n = arr.size();
    // int m = arr[0].size();
    // int mini = INT_MIN;
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    //     cout << sum << endl;
    //     sum = 0;
    // }
    // cout << mini << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = ; j < m; j++)
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<int> arr = {1, 1, 1, 0, 1, 0, 1, 1, 0};
    // int n = arr.size();

    // //! step first fil the array
    // vector<int> twoscomp(n + 1);

    // for (int i = n - 1, k = twoscomp.size() - 1; i >= 0; i--, k--)
    // {
    //     twoscomp[k] = arr[i] == 0 ? 1 : 0;
    // }

    // //! step second add 1 to the array
    // int carray = 1;
    // for (int i = twoscomp.size() - 1; i >= 0; i--)
    // {
    //     int sum = twoscomp[i] + carray;
    //     twoscomp[i] = sum % 2;
    //     carray = sum / 2;

    //     if (carray == 0)
    //     {
    //         // optimzatiiom
    //         break;
    //     }
    // }

    // if (carray)
    // {
    //     twoscomp[0] = carray;
    // }

    //* for same array size

    // vector<int> twoscomp(n);

    // for (int i = n - 1, k = n - 1; i >= 0; i--, k--)
    // {
    //     twoscomp[k] = arr[i] == 0 ? 1 : 0;
    // }

    // //! step second add 1 to the array
    // int carray = 1;
    // for (int i = twoscomp.size() - 1; i >= 0; i--)
    // {
    //     int sum = twoscomp[i] + carray;
    //     twoscomp[i] = sum % 2;
    //     carray = sum / 2;

    //     if (carray == 0)
    //     {
    //         // optimzatiiom
    //         break;
    //     }
    // }

    // for (auto &&i : twoscomp)
    // {
    //     cout << i << " ";
    // }

    // vector<vector<int>> arr(3, vector<int>(3, 0));
    // int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     // reverse(arr[i].begin(), arr[i].end());
    //     int s = 0;
    //     int e = arr[i].size() - 1;
    //     while (s < e){
    //         swap(arr[i][s], arr[i][e]);
    //         s++;
    //         e--;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // int n = arr.size();
    // int ans = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         ans = max(ans, sum);
    //     }
    // }
    // cout << ans << endl;

    // vector<int> nums = {1, 2, 3, 4, 23, 6};
    // int target = 23;
    // int l = 0, r = nums.size() - 1;
    // while (l <= r)
    // {
    //     int mid = l + (r - l) / 2;
    //     if (nums[mid] == target)
    //         cout << mid << endl;
    //     else if (nums[l] >= nums[mid])
    //     {
    //         if (nums[l] <= target && target < nums[mid])
    //             r = mid - 1;
    //         else
    //             l = mid + 1;
    //     }
    //     else
    //     {
    //         if (nums[mid] < target && target <= nums[r])
    //             l = mid + 1;
    //         else
    //             r = mid - 1;
    //     }
    // }
    // return -1;

    return 0;
}