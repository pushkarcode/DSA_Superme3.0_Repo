#include <iostream>
using namespace std;
bool linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return true;
        }
    }
    return false;
}

void populate(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        arr[n - j] = i + 2;
        arr[j] = i + 1;
        j++;
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        // swap(arr[i], arr[i + 1]);
    }
}

int pairSumToX(int input[], int size, int x)
{
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (input[i] + input[j] == x)
                pairs++;
        }
    }
    return pairs;
}

void sort0sand1s(int input[], int size)
{
    int nextZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
        {
            int temp = input[nextZero];
            input[nextZero] = input[i];
            input[i] = temp;
            nextZero++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}

int main()
{
    // int n, sum = 0;
    // cin >> n;
    // int input[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> input[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + input[i];
    // }
    // cout << sum << endl;

    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // int n = 6;
    // int target = 23;

    // int ans = linearSearch(arr, n, target);

    // if (ans)
    //     cout << "Present" << endl;
    // else
    //     cout << "Not Present" << endl;
    // return 0;

    // populate(arr, n);
    // swapAlternate(arr, n);
    int arr[] = {1, 0, 0, 1, 0};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int X = 6;
    // cout << pairSumToX(arr, n, X) << " " << endl;
    // sort0sand1s(arr, n);

    
}