#include <iostream>
#include <vector>
using namespace std;

int brute_force(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int lsum = 0;
        int rsum = 0;

        for (int j = 0; j < i; j++)
        {
            lsum += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rsum += arr[j];
        }
        if (lsum == rsum)
            return i;
    }
    return -1; // no peak found
}

int optimized(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    int lsum = 0, rsum = sum;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        rsum -= arr[i];
        if (rsum == lsum)
        {
            ans = i;
            break;
        }
        lsum += arr[i];
    }

    return ans; // peak found
}

int main()
{
    vector<int> arr = {2,1,-1};
    // int i = brute_force(arr);
    // cout << "peak index: " << i << endl;

    int i = optimized(arr);
    cout << "peak index: " << i << endl;

    return 0;
}