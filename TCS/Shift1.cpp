#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rangesum(int x, int y)
{
    return (y * (y + 1) / 2) - (x * (x - 1) / 2);
}
int main()
{

    // frist i get the range between 0 to 999999
    // int n1 = 3;
    // int n2 = 5;

    // int sum = ((n2 - n1 + 1) / 2) * (n1 + n2);
    // cout << sum << endl;

    // int i, j;
    // cin >> i >> j;
    // int sum = 0;

    // for (int k = i; k <= j; k++)
    // {
    //     sum = sum + k;
    // }
    // cout << sum << endl;

    // if (i > j || i < 0 || j >= 10000)
    // {
    //     cout << "invalid number" << endl;
    // }
    // else
    // {
    //     cout << rangesum(i, j);
    // }
    // return 0;

    //!------------ minimum wat to make number equal

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        check ^= arr[i];
    }

    cout << "unqiue element " << check << endl;
}