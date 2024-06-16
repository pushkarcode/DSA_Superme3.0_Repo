#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    // int arr[10] = {0};
    // fill(arr, arr+5, 7);
    // fill(arr+5, arr+10, 27);

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //! swap diffrent diffrent ways
    // ? first way
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int j = size - 1;
    int i = 0;
    // //   while (i < j)
    // // {
    //     // !first method
    //     // swap(arr[i++], arr[j--]);
    //     //? secand method
    //     // int temp = arr[i];
    //     // arr[i] = arr[j];
    //     // arr[j] = temp;
    //     // i++; j--;
    //     // * therid method

    //     // arr[i] = arr[i] ^ arr[j];
    //     // arr[j] = arr[j] ^ arr[i];
    //     // arr[i] = arr[i] ^ arr[j];
    //     // i++;
    //     // j--;

    //     // TODO: fourth method
    //     // arr[i] = arr[i] + arr[j];
    //     // arr[j] = arr[i] - arr[j];
    //     // arr[i] = arr[i] - arr[j];
    //     // i++;
    //     // j--;
    // }
    
    reverse(arr, arr+6);
 
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}