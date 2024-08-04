// #include <iostream>
// using namespace std;

// // void solve(int arr[], int s)
// // {
// //     cout << sizeof(arr) << endl;
// // }

// void change(int arr[], int s)
// {
//     arr[0] = 1;
//     arr[1] = 2;
//     arr[2] = 3;
//     arr[3] = 4;
//     arr[4] = 5;
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
//     // solve(arr, size);
//     cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
//     change(arr, size);
//     cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;

//     return 0;
// }

//!------------Daynamic memeory allocation heap-----------

#include <iostream>
using namespace std;
int main()
{
    //? Create INteger -> using stack memory
    // int a = 7;
    // cout << a << endl;

    //* Create Integer -> using Heap memory
    // int *ptr = new int;
    // //allocate memory
    // *ptr = 27;
    // cout << *ptr << endl;

    // //deallocate memory
    // delete ptr;

    //! array with stack memory
    // int arr[5] = {0};
    // cout << arr[0] << arr[1] << arr[2] << endl;

    //! array with Heap memory
    // int* arr = new int[5]; //? ye syntax mai bhul jaunga
    // cout << arr[0] << arr[1] << arr[2] << endl;

    //!---------2D array with stack
    // int arr[3][3] = {0};

    //* --------2D array with heap

    int **arr = new int *[4];

    for (int i = 0; i < 4; i++)
    {
        arr[i] = new int[3];
    }
    // taking input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Printing the result" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    //* dallocate indivual value of array
    for (int i = 0; i < 4; i++)
    {
        delete[] arr[i];
    }

    return 0;
}
