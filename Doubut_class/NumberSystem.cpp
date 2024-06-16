#include <iostream>
#include <cmath>
using namespace std;
int DeimalTOBinary(int n)
{
    // Devison method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}
int DeimalTOBinary2(int n)
{
    // Bitwise method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}
int BinaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

int main()
{
    int bit;
    cin >> bit;
    // int Binary = DeimalTOBinary2(bit);
    int decimal = BinaryToDecimal(bit);
    cout << decimal << endl;
    return 0;
}