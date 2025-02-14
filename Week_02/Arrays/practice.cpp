#include <iostream>
#include <algorithm>
using namespace std;

bool checkprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // cout << ~(5);
    // return 0;
    // int number = 3;
    // int countbits = 0;

    // while (number != 0)
    // {
    //     int lastbit = (number & 1);
    //     if (lastbit == 1)
    //     {
    //         countbits++;
    //     }
    //     number >>= 1;
    // }
    // cout << countbits;

    // int ans = checkprime(6);
    // cout << ans;
    // int n = 2  ;
    // if (!(n & 1))
    // {
    //     cout << "even" << endl;
    // }
    // else
    // {
    //     cout << "odd" << endl;
    // }

    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, arr + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}