#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {44, 67, 55, 33, 22, 11};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (auto &&i : arr)
    {
        cout << " " << i ;
    }

    return 0;
}