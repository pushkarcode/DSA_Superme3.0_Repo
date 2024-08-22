#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
void printArray(int arr[], int size, int index)
{
    // basecase
    if (index == size)
        return;
    // recursive call
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
    // processing
}

bool searchinArray(int arr[], int size, int index, int target)
{
    // base case
    if (index >= size)
        return false;
    // recursive call
    if (arr[index] == target)
    {

        return true;
    }
    bool ans = searchinArray(arr, size, index + 1, target);
    return ans;
    // processing
}

void max_INArray(int arr[], int size, int index, int &maxi)
{
    // base case
    if (index >= size)
    {
        return;
    }
    // recursive call
    maxi = max(maxi, arr[index]);
    // processing
    max_INArray(arr, size, index + 1, maxi);
}

void min_INArray(int arr[], int size, int index, int &maxi)
{
    // base case
    if (index >= size)
    {
        return;
    }
    // recursive call
    maxi = min(maxi, arr[index]);
    // processing
    min_INArray(arr, size, index + 1, maxi);
}

void printOddNumber(int arr[], int size, int index)
{
    // base case
    if (index == size)
        return;
    // recursive call
    if (!(arr[index]) & 1)
    {
        cout << arr[index] << " ";
    }

    printOddNumber(arr, size, index + 1);
}

int binarySearchRecursion(vector<int> &arr, int size, int target, int s, int e)
{
    // base case
    if (s > e)
        return -1;

    // 1- case handle by me
    int mid = (s + e) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    // 2- case handle by me
    if (target > arr[mid])
    {
        return binarySearchRecursion(arr, size, target, mid + 1, e);
    }
    else
    {
        return binarySearchRecursion(arr, size, target, s, mid - 1);
    }
}

void printDigit(int n)
{
    // base case
    if (n == 0)
        return;

    int next = n / 10;
    printDigit(next);

    // recursive call
    int digit = n % 10;
    cout << digit << " ";

}

int main()
{

    // int arr[] = {1,2,3,4,,5}

    // vector<int> arr = {2, 4, -2, 7, -9};

    // int n = arr.size();

    // int low = 0, high = n - 1;

    // while (low <= high)
    // {
    //     if (arr[low] < 0)
    //     {
    //         low++;
    //     }
    //     else if (arr[high] > 0)
    //     {
    //         high--;
    //     }
    //     else
    //     {
    //         swap(arr[low], arr[high]);
    //     }
    // }

    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }
    //!--------------start recursion class----

    //?--(printing array with recursion)

    // int arr[] = {10, 20, 40, 50, 60};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int index = 0;

    // int target = 14;
    //!--printing array
    // printArray(arr, n, index);
    //!---linear search using recursion
    // bool ans1 = searchinArray(arr, n, index, target);
    // cout << ans1 << endl;

    //!-------min&max using recursion

    // int maxi = INT_MIN;
    // max_INArray(arr, n, index, maxi);
    // int mini = INT_MAX;
    // min_INArray(arr, n, index, mini);
    // cout << mini << endl;

    //!---------print odd numbers
    // printOddNumber(arr, n, index);

    //!---------Binary search usign recursion---

    // vector<int> arr = {10, 20, 30, 40, 50, 60};
    // int n = arr.size();
    // int target = 60;
    // int low = 0, high = n - 1;
    // int ans = binarySearchRecursion(arr, n, target, low, high);
    // cout << "answer found at index: " << ans << endl;

    //!--------- printDigit------------
    // int nums = 1234;
    // printDigit(nums);


    return 0;
}