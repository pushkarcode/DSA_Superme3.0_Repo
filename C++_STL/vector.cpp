#include <iostream>
#include <vector>
using namespace std;
int main()
{

    //! 1_D Array
    // vector<int> arr(7);

    // for (auto &&i : arr)

    // {
    //     cout << i << " ";
    // }

    //! 2-D Array
    // vector<vector<int>> arr(4, vector<int>(4, 7));
    // int n = arr.size();
    // int m = arr[0].size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //! jagged array
    // vector<vector<int>> arr(4);

    // arr[0] = vector<int>(4);
    // arr[1] = vector<int>(3);
    // arr[2] = vector<int>(5);

    // int row = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //    arr[i].size();
    // }

    int arr[3][3];
    fill(&arr[0][0], &arr[0][0] + (3 * 3), -1);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}