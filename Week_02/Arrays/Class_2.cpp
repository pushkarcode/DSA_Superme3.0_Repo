#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

// int findUnique(int arr[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int findUnique_2(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                arr[i] = 0;
//                arr[j] = 0;
//                break;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]!= 0)
//         {
//             return arr[i];
//         }
//     }
// }

void SortZeroAndOne(int arr[], int n)
{
    //  ! First method
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // ! secand Method
    // int zero = 0, one = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zero++;
    //     }
    //     else
    //     {
    //         one++;
    //     }
    // }

    // for (int i = 0; i < zero; i++)
    //     arr[i] = 0;

    // for (int i = zero; i < n; i++)
    //     arr[i] = 1;

    // fill(arr, arr+zero, 0);
    // fill(arr+zero, arr+n, 1);

    //! therid way 2 pointer

    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
            i++;
        while (arr[j] == 1 && i < j)
            j--;
        if (i < j)
        {
            arr[i] = 0;
            arr[j] = 1;
            i++;
            j--;
        }
    }
}

void filp_Bit(int arr[], int n)
{
    // ! first way
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         arr[i] = 1;
    //     }
    //     else
    //     {
    //         arr[i] = 0;
    //     }
    // }
    // ! second way
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = !arr[i];
    // }

    // ! fourth way
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = 1 ^ arr[i];
    // }
}

void filp_Bit_to_negative(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = -1;
        }
    }
}

void Two_Complement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = !arr[i];
    }

    // for (int i = n - 1; i > 0; i--)
    // {
    //     arr[i] = 1 ^ arr[i];
    // }
}

void SortZeroAndOneAndTwo(int arr[], int n)
{
    // ! firsrt way to sort brute mwethod

    // int zero = 0, one = 0, two = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zero++;
    //     }
    //     else if (arr[i] == 1)
    //     {
    //         one++;
    //     }
    //     else
    //     {
    //         two++;
    //     }
    // }
    // for (int i = 0; i < zero; i++) arr[i] = 0;
    // for (int i = zero; i < zero + one; i++) arr[i] = 1;
    // for (int i = zero+one; i < n; i++) arr[i] = 2;

    // ! secand way (Ductch national flag algo)

    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++, low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printAllPaires(int arr[], int n)
{
    //! lower tringle
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++) // j = i unqiue pair
    //     {
    //         cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
    //     }
    //     cout << endl;
    // }
    // ! UPPER TRIANGLE
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
    //     }
    //     cout << endl;
    // }

    //? Doing loop practice
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        }
        cout << endl;
    }
}

// bool TwoSum(int arr[], int target, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             arr[i] + arr[j] == target;
//             return true;
//         }
//     }
//     return false;
// }

pair<int, int> checkTwoSum(int arr[], int n, int target)
{
    // assuming (-1,-1) as no answer found
    pair<int, int> ans = make_pair(-1, -1);
    // check all pairs
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                // found a pair that sums to target
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    // agar aap yha tak pohoch gye
    // iska matlab, koi bhi pair target k equal nahi mila
    // iska matlab return false karo
    return ans;
}

void checkTwoSumUsingArray(int arr[], int n, int target, int ans[])
{

    // check all pairs
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                // found a pair that sums to target
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
    // agar aap yha tak pohoch gye
    // iska matlab, koi bhi pair target k equal nahi mila
    // iska matlab return false karo
    return;
}

void checkTwoSumAllPaires(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

void printTriplate(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                sum++;
            }
        }
    }
    cout << "Total Triplate pair: " << sum << endl;
}

void checkThreeSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << arr[i] << arr[j] << arr[k] << endl;
                }
            }
        }
    }
}

void rotateArray(int arr[], int size, int n)
{
    n = n % size;

    if (n == 0)
        return;

    // ! step -1 copy last shift element to temp array
    int temp[1000];
    int index = 0;
    for (int i = size - n; i < size; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    // ! step -2 shift array elements by final shift element
    for (int i = size - 1; i >= 0; i--)
    {
        if (i - n >= 0)
        {
            arr[i] = arr[i - n];
        }
    }

    //! step -3 copy temp array to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    // int arr[] = {10, 20, 30, 40};
    // int n = 4;
    // int target = 60;

    //! using return true false
    // int ans = TwoSum(arr, target, n);
    //  if (ans)
    // {
    //     cout << "Pair Found" << endl;
    // }
    // else
    // {
    //     cout << "Pair Not Found" << endl;
    // }

    // ! using return pair method
    // pair<int, int> ans = checkTwoSum(arr,n,target);
    // if (ans.first == -1 && ans.second == -1)
    // {
    //     cout << "Pair Not Found" << endl;
    // }
    // else
    // {
    //     cout << "Pair Found : (" << ans.first << "," << ans.second << ")" << endl;
    // }

    // ! using return array
    // int ans[2] = {INT_MIN , INT_MIN};
    // checkTwoSumUsingArray(arr, n, target, ans);
    // cout<<ans[0]<<","<<ans[1]<<endl;

    // checkTwoSumAllPaires(arr, n, target);

    // int ans = findUnique(arr, n);
    // int ans = findUnique_2(arr, n);
    // SortZeroAndOne(arr, n);
    // filp_Bit(arr, n);
    // filp_Bit_to_negative(arr, n);
    // Two_Complement(arr, n);
    // SortZeroAndOneAndTwo(arr, n); //! dutch national flag algo
    // printAllPaires(arr, n);
    // printTriplate(arr, n);
    // checkThreeSum(arr, n, target);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << "Unique element : " << ans << endl;

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int shift;
    cout << "Number of elements that Shift" << endl;
    cin >> shift;

    cout << "Array Before Shift" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    rotateArray(arr, n, shift);


    cout <<endl<< "Array After Shift" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
