#include <iostream>
using namespace std;
// void SieveOfEratosthenes(int n)
// {
//     vector<bool> prime(n+1, false);

//     for (int p = 2; p * p <= n; p++) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = true;
//         }
//     }

//     for (int p = 0; p <= n; p++)
//         if (prime[p])
//             cout << p << " ";
// }

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}
// int main()
// {
//     // cout << isPrime(5);

//     return 0;
// }

// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     // ptr = &a;
//     cout << *ptr << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// int main()
// {
//     int p = 5;
//     int *q = &p;
//     p++;
//     cout << p << endl;
//     return 0;
// }


