#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int brute(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return i + 1;
            }
        }
    }
    return -1; // No duplicate found
}

int optimize(vector<int> &arr, int n)
{
    unordered_map<int, int> hesh;
    for (int i = 0; i < arr.size(); i++)
    {
        hesh[arr[i]]++;
    }

    // extractinf value

    for (int i = 0; i < arr.size(); i++)
    {
        if (hesh[arr[i]] > 1)
        {
            return i + 1;
        }
    }

    return -1;
}
int main()
{

    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    int n = arr.size();

    // int ans = brute(arr, n);
    // cout << "first repeating element: " << ans << endl;

    //!--------hesh_map---

    int ans = optimize(arr, n);
    cout << "first repeating element: " << ans << endl;

    return 0;
}