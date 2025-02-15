#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
// #include <cstdio>
using namespace std;

bool checkprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

// bool linear_search(int arr[], int n, int search)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == search)
//         {
//             return true;
//         }
//     }
//     return false;
// }

int main()
{
    // cout << ~(5);
    // return 0;
    // int number = 3;
    // int countbits = 0;

    // while (number != 0)
    // {
    //     int lastbit = (number & 1);
    //     if (lastbit == 1)
    //     {
    //         countbits++;
    //     }
    //     number >>= 1;
    // }
    // cout << countbits;

    // int ans = checkprime(6);
    // cout << ans;
    // int n = 2  ;
    // if (!(n & 1))
    // {
    //     cout << "even" << endl;
    // }
    // else
    // {
    //     cout << "odd" << endl;
    // }

    // int arr[5] = {1, 2, 3, 4, 5};
    // reverse(arr, arr + 5);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // int temp = a;
    // b = a;
    // b = temp

    // a =  a+b;
    // b  = a-b;
    // a = a-b;

    //   a = a^b;
    //   b = b^a;
    //   a = a^b;

    // int arr[6] = {1, 2, 3, 4};

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - 1; j > i; j--)
    //     {
    //         cout << arr[i] << " " << arr[j] << endl;
    //     }
    // }

    // int i = 0;
    // int j = 6 - 1;
    // while (i <= j)
    // {
    //     if (i == j)
    //     {
    //         cout << arr[i] << endl;
    //         break;
    //     }
    //     cout<<arr[i++]<<endl;
    //     cout<<arr[j--]<<endl;

    // }

    // int mini = INT_MAX;
    // for (int i = 0; i < 5; i++)
    // {
    //     mini = min(arr[i], mini);
    // }

    // cout << mini << endl;

    //! roate the array

    // int arr[6] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // int shift = 3;

    // check how many occurace shifts
    // int finalshfit = shift % size;

    // // edge case
    // if (finalshfit == 0)
    // {
    //     return 0;
    // }

    // // strp1: temp array store shfit n erlements

    // int tem[10000];
    // int index = 0;
    // for (int i = size - finalshfit; i < size; i++)
    // {
    //     tem[index] = arr[i];
    //     index++;
    // }
    // // step2 shfit array by n [palce]

    // for (int i = size - 1; i >= 0; i--)
    // {
    //     if (i - finalshfit >= 0)
    //     {
    //         arr[i] = arr[i - finalshfit];
    //     }
    // }

    // // step3 copy temp array to original array

    // for (int i = 0; i < finalshfit; i++)
    // {
    //     arr[i] = tem[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // stl data for normal users

    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    vector<int> v;
    for (int i = 0; i < 30; i++)
    {
        v.push_back(i);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}