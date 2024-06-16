#include <iostream>
#include <cmath>
using namespace std;

void checkFactorial(int n)
{
    long long sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    cout << sum << endl;
}

bool checkNumberisPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool print_1to_Nprime(int n)
{
    if (n == 0 || n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void reverse_integer(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << rev << endl;
}

void decimal_to_binary(int n)
{
    int sum = 1, i = 0;
    while (n)
    {
        int bit = n & 1;
        sum = sum + bit * pow(10, i++);
        n = n >> 1;
    }
    cout << sum << endl;
}

void binary_to_decimal(int n)
{
    int deci = 0, i = 0;
    while (n)
    {
        int bit = n & 1;
        deci = deci + bit * pow(2, i++);
        n = n / 10;
    }
    cout << deci << endl;
}

void set_k_Bit(int n, int k)
{
    int ans = ((1 << k) | n);
    // return ans;
}

void KM_to_Miles(int n)
{
    float ans = (float)n * 0.62137119;
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    // checkFactorial(n);
    // if (checkNumberisPrime(n))
    // {
    //     cout << "Prime" << endl;
    // }
    // else
    // {
    //     cout << "Not Prime" << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (print_1to_Nprime(i)) {
    //         cout<<i<<" prime"<<endl;
    //     }
    //     else {
    //         cout<<i<<" not prime"<<endl;
    //     }
    // }

    //  reverse_integer(n);
    // decimal_to_binary(n);
    // binary_to_decimal(n);
    // set_k_Bit(n);
    // KM_to_Miles(n);
    int cnt = 0, i = 0;
    while (n > 0)
    {
       int bit = n%2;
       int cnt = cnt + bit *pow(i++, 10);
       int n = n/2;
    }

    cout <<  cnt;
    return 0;
}