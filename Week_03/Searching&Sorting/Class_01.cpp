#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binarySearch(vector<int> &arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            cout << mid << endl;
            return;
        }
        else if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = (start + end) / 2;
    }
    cout << -1 << endl;
    return;
}

void findFirstOccurance(int arr[], int n, int target, int &ansIndex)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found --> may or may not be first occurance
            // store ans compute
            ansIndex = mid;
            // first occurance search in (left side)
            e = mid - 1;
        }
        else if (target > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
}

void findLastOccurance(int arr[], int n, int target, int &ansIndex)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans found --> may or may not be first occurance
            // store ans compute
            ansIndex = mid;
            // first occurance search in (left side)
            s = mid + 1;
        }
        else if (target > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
}

void missingNumber(vector<int> arr, int n, int &ansIndex)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int Number = arr[mid];
        int Index = mid;
        int diff = Number - Index;
        if (diff == 0)
        {
            s = mid + 1;
        }
        else if (diff == 1)
        {
            ansIndex = Index;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int main()
{

    //! binary search golu
    // vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7};
    // int n = arr.size();
    // int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    // int n = 8;
    // int target = 5;
    // binarySearch(arr, n, target);

    // * using STL function
    // bool ans = binary_search(arr, arr + n, target);
    // bool ans = binary_search(arr.begin(), arr.end(), target);
    // cout << ans << endl;

    //! find first occurecase (using store&compute)
    //! find last occurecase (using store&compute)
    //! find total occurecase (using store&compute)

    // int arr[] = {20, 20, 20, 20, 20, 20, 20, 60,70};
    // int n = 9;
    // int target = 20;
    // int firstIndex = -1;
    // //?binary search lagane jaa rha hu ! pakka array sorted hoga
    // findFirstOccurance(arr, n, target, firstIndex);
    // int lastIndex = -1;
    // findLastOccurance(arr, n, target, lastIndex);

    // int ansIndex = (lastIndex  - firstIndex) + 1;

    // cout << "Found at index: " << ansIndex << endl;

    //! find missing element
    vector<int> arr = {0, 1, 3, 4};
    int n = arr.size();
    // int ansIndex = -1;
    // sort(arr.begin(), arr.end());
    // missingNumber(arr, n, ansIndex);
    // if(ansIndex == -1) ansIndex = n;
    // cout << "Missing Number :" << ansIndex << endl;

    //! diffrent way
    // int sum = 0;
    // sum = n* (n+1)/2;
    // for (int i = 0; i < n; i++)
    // {
    //     sum -= arr[i];
    // }
    // cout << sum << endl;

    //! Xor method
    int sum  = 0;
    for (int i = 0; i < n; i++)
    {
     sum ^= arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        sum ^=i;
    }
    
    cout<<sum<<endl;
    

    return 0;
}