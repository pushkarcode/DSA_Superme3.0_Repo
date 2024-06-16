#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int decimal;
    cin >> decimal;

    int ans = 0, i = 0, cnt = 0;
    while (decimal)
    {
        int bit = decimal & 1;
        if (bit) cnt++;
        ans = ans + bit * pow(10, i++);
        decimal = decimal >> 1;
    }
    cout << ans << endl;
    cout << "All Set bits: " << cnt << endl;
    return 0;
}