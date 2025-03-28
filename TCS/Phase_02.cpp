#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    //! prime number questions
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    for (int i = 2; count < n; i++)
    {
        if (isprime(i))
        {
            sum += i;
            count++;
        }
    }

    cout << "sum : " << sum << endl;
}