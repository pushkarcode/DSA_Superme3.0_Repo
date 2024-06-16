#include <iostream>
using namespace std;
int main()
{
    // ! implicite type casting

    int a = 10;
    int b = 3.0;
    float c = a /((float)b);
    cout << c << endl;
    return 0;

    // int n;
    // cin >> n;
    // int sum = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum * i;
    // }
    // cout<<sum<<endl;
}
