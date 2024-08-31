#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},

    };

    int m = arr.size();
    int n = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        // first print top to bottom for even number
        if ((i & 1) == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        // for bottom to top for odd numbers
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}
