#include <iostream>
#include <limits.h>
using namespace std;
//add file in that
void LinearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            cout << "element found" << endl;
    }
    cout << "not found" << endl;
}

void find_max(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << maxi << endl;
}
// void max(int arr[], int size) 
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         maxi = max(arr[i], maxi);
//     }
//     cout<<"maxi = "<<maxi<<endl;
// }

//!----that how this function works ----

void count_Zero_Ones(int arr[], int size)
{
    int zero = 0;
    int ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            ones++;
        }
    }
    cout << zero << " " << ones << endl;
}

void Extream_Print(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
            break;
        }
        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j--;
    }
}

void swap_arr(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i++], arr[j--]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

//*--------top interview qwuestion-----------  


void Reverse_arr(int arr[], int size)
{
}

int main()
{
    //    int arr[7];
    //    fill(arr, arr+7,27);
    //    for (int i = 0; i < 7; i++)
    //    {
    //     cout << arr[i] << " ";
    //    }

    // ! Always do its a good practice sf ef sdfsjd 
    // int arr[100];
    // int size;
    // cout << "Enter the Size of array" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the elements of array" << endl;
    //     cin >> arr[i];
    // }

    // cout << "Enter Search element" << endl;
    // int target;
    // cin >> target;
    // if(LinearSearch(arr, size, target)) {
    //     cout<<"Element Present"<<endl;
    // }
    // else {
    //     cout<<"Element Not Present"<<endl;
    // }

    // int arr[] = {1, 22, 42, 2, 76, 27};
    // int arr[] = {0, 1, 1, 0, 0, 1, 1};
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int target = 40;
    // LinearSearch(arr, size, target);
    find_max(arr, size);
    // count_Zero_Ones(arr, size);
    // Extream_Print(arr, size);
    // swap_arr(arr, size);
    // Reverse_arr(arr, size);

    return 0;
}
