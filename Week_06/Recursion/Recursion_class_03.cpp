#include <iostream>
#include <vector>
using namespace std;

bool check_sorted(vector<int> &arr, int size, int index)
{
    // base case
    if (index == size - 1)
        return true;

    // recursive call
    if (arr[index] > arr[index + 1])
    {
        return false;
    }

    return check_sorted(arr, size, index + 1);
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int size = arr.size();
    int index = 0;

    bool ans = check_sorted(arr, size, index);
    cout << ans << endl;

    return 0;
}