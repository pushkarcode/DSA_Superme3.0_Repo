#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    int sqare = sqrt(n);
    for (int i = 2; i <= sqare; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int countPrime(int n)
{
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    int ans = 0;
    for (int i = 2; i * i < n; i++) //* outer loop optimization
    {
        if (prime[i])
        {
            ans++;

            // int j = 2 * i;
            int j = i * i; //? optimization golu inside inner loop
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    cout << "count of prime nuber" << ans << endl;
}

void slowexponention(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    cout << ans << endl;
}

void fastexponention(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    cout << ans << endl;
}

int main()
{

    //! prime number brute force methods and sqrt method

    // int n;
    // cin >> n;
    // int cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (isprime(i))
    //     {
    //         cnt++;
    //     }
    // }
    // cout << "count of prime nuber" << cnt << endl;

    //! prime nuber using sieve of eratosthenes algo

    // int n;
    // cin >> n;
    // countPrime(n);

    //! GCD and lcm and hcf

    //! Slow and fast exponention
    int num, power;
    cin >> num >> power;
    slowexponention(num, power);
    fastexponention(num, power);

    return 0;
}