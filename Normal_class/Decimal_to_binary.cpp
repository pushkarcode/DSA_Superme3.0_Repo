#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int binary = 1, i = 0;
    // * divisblw method not used in intervie
    while (n>0)
    {
        int bit = n%2;
        binary = binary + bit*pow(10,i++);
        n /= 2;
    }

    cout<<binary<<endl;

    // ! Bitwise method
//* this was more optimal ways

    // while (n)
    // {
    //     int bit = n & 1;
    //     binary = binary + bit * pow(10, i++);
    //     n = n >> 1;
    // }
    // cout << binary << endl;
}