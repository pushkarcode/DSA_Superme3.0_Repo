// #include <iostream>
// using namespace std;

// n
// int main()
// {
//     int n;
//     cin >> n;
//     if (n & 1)
//     {
//         cout << "Odd" << endl;
//     }
//     else
//     {
//         cout << "Even" << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

void Party()
{
    cout << "party" << endl;
}

void Study()
{
    cout << "study" << endl;
}

//! coustom namepsace;
namespace Pushkar
{
    void Party()
    {
        cout << "party" << endl;
    }
}

int main()
{
    // Party();
    // Study();
    // Pushkar::Party();
    // int n;
    // cin >> n;
    // int ans = 0;
    // int count = 0;
    // while (n)
    // {
    //     int rev = n % 10;
    //     if (rev == 1)
    //         count++;
    //     ans = ans * 10 + rev;
    //     n /= 10;
    // }

    // cout << ans << endl;
    // cout << count << endl;

    // int count = 0;
    // while (n)
    // {
    //     int setbit = n % 2;
    //     if (setbit == 1)
    //         count++;
    //     n = n / 2;
    // }
    // cout << count << endl;
    // int k = 2;
    // int mask = 1 << k;
    // int ans = n | mask;
    // cout << ans << endl;

    int arr[8];
    fill(arr, arr + 8, 7);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    int a = sizeof(arr);
    int b = sizeof(int);
    int c = a / b;
    cout << c << "";
    return 0;
}