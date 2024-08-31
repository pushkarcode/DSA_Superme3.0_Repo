#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int m = arr.size();    // colum
    int n = arr[0].size(); // row
    int total_Sum = n * m;
    vector<int> ans;

    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;

    int count = 0;
    while (count < total_Sum)
    {
        // print starting row
        for (int i = startingCol; i <= endingCol && count < total_Sum; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;
        // print ending col
        for (int i = startingRow; i <= endingRow && count < total_Sum; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int i = endingCol; i >= startingCol && count < total_Sum; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; i >= startingRow && count < total_Sum; i--)
        {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}