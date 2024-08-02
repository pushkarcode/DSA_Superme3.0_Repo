#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

bool SearchElementINTwoDArray(vector<vector<int>> arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
                break;
            }
        }
    }
    return false;
}

void FindMinELementInTwoDArray(vector<vector<int>> arr, int n)
{
    int MinValue = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // MinValue = min(arr[i][j], MinValue);
            if (arr[i][j] < MinValue)
            {
                MinValue = arr[i][j];
            }
        }
    }
    cout << "MinValue: " << MinValue << endl;
}

void FindMaxELementInTwoDArray(vector<vector<int>> arr, int n)
{
    int MaxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // MaxValue = max(arr[i][j], MaxValue);
            if (arr[i][j] > MaxValue)
            {
                MaxValue = arr[i][j];
            }
        }
    }
    cout << "MaxValue: " << MaxValue << endl;
}

void printRowSum(vector<vector<int>> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}
void printColSum(vector<vector<int>> arr, int n)
{
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void diagonal_Sum_matrix(vector<vector<int>> arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
}

void diagonal_Opposite_Sum_matrix(vector<vector<int>> arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
}

void transpose_Matrix(vector<vector<int_least32_t>> arr, int n)
{
    // int ans[50][50];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         ans[i][j] = arr[j][i];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // ! not used external size in place

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // * 2D - Arrays Golus
    // int arr[3][3] = {
    // {1, 2, 3, 4},
    // {5, 6, 7, 8},
    // {9, 11, 12, 13},
    // {14, 15, 16, 17},
    // };
    // int n = 3;
    //    fill(arr,arr+3, 27);
    // ! printing row wise
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // ! printing colum wise
    // for (int j = 0; j < 4; j++)
    // {
    // cout << arr[i][i] << endl; //? single line
    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // //! printing left diagonal wise
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //! printing right diagonal wise
    // for (int i = 0; i < n; i++)
    // {
    // for (int j = 0; j < n; j++)
    // {
    //     if (j == n - i - 1)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    // }
    // cout << endl;
    // }

    //! taking row-wise input
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    //    cout<<"Priting 2d array golus"<<endl;
    //! Printing fucking looop golu
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //* 2D Array questions Golu
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 11, 12, 13},
    //     {14, 15, 16, 17},
    // };
    vector<vector<int>> arr(3, vector<int>(3, 0));

    
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // int target = 117;
    // int ans = SearchElementINTwoDArray(arr, size, target);
    // if (ans)
    //     cout << "present" << endl;
    // else
    //     cout << "not present" << endl;

    // FindMinELementInTwoDArray(arr, n);
    // FindMaxELementInTwoDArray(arr, n);
    // printRowSum(arr, n);
    // printColSum(arr, n);
    // diagonal_Sum_matrix(arr, n);
    // diagonal_Opposite_Sum_matrix(arr, n);
    transpose_Matrix(arr, n);

    return 0;
}