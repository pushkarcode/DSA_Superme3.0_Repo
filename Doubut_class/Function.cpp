#include <iostream>
using namespace std;

void EligibleforVote(int age)
{
    (age > 18) ? cout << "Eligible for vote" : cout << "not Eligible for votes";
}

// int SampleIntrest(int p, int r, int t)
// {
//     return (p * r * t) / 100;
// }

// void PrimeNumber()
// {
//     for (int i = 2; i <= 100 / 2; i++)
//     {
//         if (100 % 2 == 0)
//         {
//             break;
//         }
//         else if (i > 100 / 2)
//         {
//             cout << "prime number" << i;
//         }
//     }
// }

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n; i++)
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
    // int age;
    // cin >> age;
    // EligibleforVote(age);
    // int priciplr, rate, time;
    // cin >> priciplr >> rate >> time;
    // int push = SampleIntrest(priciplr, rate, time);
    // cout << push << " ";
    for (int i = 0; i < 100; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}