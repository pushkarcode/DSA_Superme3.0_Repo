#include <iostream>
using namespace std;

int getFactorial(int n)
{
    //! base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    //?recursive Call
    int finalAns = n * getFactorial(n - 1);
    return finalAns;
    //*processing
}

void printCount(int n)
{
    if (n == 0)
    {
        return;
    }
    printCount(n - 1);
    cout << n << " ";
}

int Pow(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    // recurive call
    int finalAns = 2 * Pow(n - 1);
    return finalAns;
    // processing
}

int fab(int n)
{
    // base case
    if (n == 0 || n == 1)
        return n;
    // recursive call
    int ans = fab(n - 1) + fab(n - 2);
    return ans;
    // processing
}

int getSum(int n)
{
    // base case
    if (n == 1)
        return 1;
    // recursive call
    int ans = getSum(n - 1) + n;
    return ans;
    // processing
}

int main()
{

    int n;
    cin >> n;

    //!----------- call a function for factroial
    int ans = getFactorial(n);
    cout << "Factorial: " << n << " is: " << ans << endl;

    //?---another expamle of recursion

    // printCount(n);

    //?-------power using recursion

    // int ans = Pow(n);
    // cout << "power of " << n << " is: " << ans << endl;

    //?---------fibonacci series using recursion

    // int ans = fab(n);
    // cout << "Fibonacci series: " << n << "th number is: " << ans << endl;

    //*-----sum 1 to n----------
    // int ans = getSum(n);
    // cout << "Sum of 1 to " << n << " is: " << ans << endl;

    return 0;
}