#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {55, 44, 12, 6, 4, 3};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {           
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for (auto &&i : arr)
    {
        cout << " " << i;
    }

    return 0;
}
