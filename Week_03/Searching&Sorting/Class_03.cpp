#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int getQuotient(int dividend, int divisor)
{
    int s = 0;
    int e = dividend;
    int ans = -1;
    int mid = s + ((e - s) >> 1);
    while (s <= e)
    {
        if ((divisor * mid) == dividend)
        {
            return mid;
        }
        else if ((divisor * mid) < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + ((e - s) >> 1);
    }
    return ans;
}

int binarySearch(vector<int> &arr, int key)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid + 1] == key)
        {
            return mid + 1;
        }
        if (arr[mid - 1] == key)
        {
            return mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    //! Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

    //* Input: dividend = 10, divisor = 2
    //* Output: 5
    //* Explanation: 10/2 = 5.

    //? Input: dividend = 10, divisor = 3
    //? Output: 3
    //? Explanation: 10/3 = 3.33333… which is truncated to 3.

    //*Input: dividend = 10, divisor = -2
    //* Output: -5
    //* Explanation: 10/-2 = -5

    int dividend = 65;
    int divisor = -5;
    // mission to find Qutioned
    int ans = getQuotient(abs(dividend), abs(divisor));
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = 0 - ans;
    }
    cout << "Final ans: " << ans << endl;

    //! --------------Secand QUestion----------------------------------

    //! Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

    //* Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
    //* Output: 2
    //* Explanation: Output is index of 40 in given array i.e. 2

    //? Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
    //? Output: -1
    //? Explanation: -1 is returned to indicate the element is not present

    // vector<int> arr{10, 3, 20, 40, 50, 80, 90};
    // int key = 10;
    // int ans = binarySearch(arr, key);
    // cout << "target At index: " << ans << endl;



    //!-------------------(odd Occuring Elemewnt)----------------

    // vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};
    // int n = arr.size();
    //! first way
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum ^ arr[i];
    // }
    // cout << sum << endl;

    //! secand way
    // unordered_map<int, int> freqMap;
    // for (int i = 0; i < n; i++)
    // {
    //     int num = arr[i];
    //     freqMap[num] = freqMap[num] + 1;
    // }
    // unordered_map<int, int>::iterator it = freqMap.begin();

    // while (it != freqMap.end())
    // {
    //     int key = it->first;
    //     int value = it->second;
    //     if (value == 1)
    //     {
    //         cout << key << endl;
    //         break;
    //     }
    //     it++;
    // }

    //!-----------final way with (log n complexity)
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        // case: 1
        if (s == e)
        {
            return arr[s];
        }

        int currentVal = arr[mid];
        int leftval = -1;
        if (mid - 1 >= 0)
        {
            leftval = arr[mid - 1];
        }
        int rightval = -1;
        if (mid + 1 < n)
        {
            rightval = arr[mid + 1];
        }

        // case: 2
        if ((currentVal != leftval) && (currentVal != rightval))
        {
            // return currentVal;
            cout<<currentVal<<endl;
            break;
        }
        // case: 3 left mai duplicate mila
        if (currentVal == leftval && currentVal != rightval)
        {
            int pairIndex = mid - 1;
            if (pairIndex & 1)
            {
                // odd index par right mai
                // standing on right
                //    move left
                e = mid - 1;
            }
            else
            {
                // left move
                s = mid + 1;
            }
        }
        // case: 4 when right pair match
        if (currentVal == rightval && currentVal != leftval)
        {
            int pairIndex = mid;
            if (pairIndex & 1)
            {
                // odd index par right mai
                // standing on right
                //    move left
                e = mid - 1;
            }
            else
            {
                // left move
                s = mid + 1;
            }
        }
        mid = s + (e - s) / 2;
    }

    return 0;
}