#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> &arr, int s, int e, int x)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int expo_search(vector<int> &arr, int n, int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= x)
    {
        i *= 2;
    }

    return bs(arr, i / 2, min(i, n - 1), x);
}
int main()
{
    //?other name---(doubling sum) (starlic sum)
    vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = arr.size();
    int x = 13;
    int ans = expo_search(arr, n, x);
    cout << "ans = " << ans << endl;

    return 0;
}