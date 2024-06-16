#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {55, 33, 12, 44, 2};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
