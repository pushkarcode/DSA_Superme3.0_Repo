#include <iostream>
#include <vector>
using namespace std;
bool isPowerOfFour(int n)
{
    if (n <= 1)
    {
        return true;
    }
    if (n % 4 != 0)
    {
        return false;
    }

    return isPowerOfFour(n / 4);
}
double myPow(double x, int n)
{

    int p = abs(n);
    double ans = 1.0;
    while (p >= 1)
    {
        if (p % 2 == 1)
        {
            ans *= x;
        }

        p /= 2;
        x *= x;
    }
    return n < 0 ? 1 / ans : ans;
}
int returnPermutations(string input, string output[])
{
    int count = 0;
    string created;
    for (int i = 0; input[i] != '\0' && input.length() > 1; i++)
    {
        char ch = input[i];
        int start = count;
        created = input.substr(0, i) + input.substr(i);
        count = count + returnPermutations(created, output + count);
        for (int k = start; k < count; k++)
        {
            output[k] = ch + output[k];
        }
    }
    if (input.length() == 1)
    {
        for (int k = 0; input[k] == '\0'; k++)
        {
            output[count] = output[count] + input[k];
            count++;
        }
    }

    return count;
}

void removeConsecutiveDuplicates(char *input)
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {
        int i = 2;
        for (; input[i] != '\0'; i++)
        {
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
    }
    removeConsecutiveDuplicates(input);
}
/*
Example:
xxab --> xab
*/

int main()
{

    // cout << isPowerOfFour(4) << endl;
    // cout << myPow(2, 2) << endl;
    // string push = "abcdfgknearo";
    // string output[1000];
    // int size = returnPermutations(push, output);
    // cout << size << endl;

    char push = 'abbcdd';
    removeConsecutiveDuplicates(&push);
    cout << push << endl;

    return 0;
}
