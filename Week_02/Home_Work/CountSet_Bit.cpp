#include <iostream>
using namespace std;

int createDigit(int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int digit;
        cout << "Digit: " << endl;
        cin >> digit;
        num = num * 10 + digit;
        cout << num << endl;
    }
    return num;
}
int main()
{
    int n;
    cout << "Enter the number of digits: " << endl;
    cin >> n;
    // int cnt = 0;
    // while (n > 0)
    // {
    //     int bit = n & 1;
    //     if (bit == 1)
    //         cnt++;
    //     n = n>>1;
    // }
    // cout << cnt;
    int num = createDigit(n);
    cout << "num = " << num << endl;
}