#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int decimal = 0, i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        // cout << decimal << endl;
        n /= 10;
    }

    cout << decimal << endl;

    // ! only one method
}
