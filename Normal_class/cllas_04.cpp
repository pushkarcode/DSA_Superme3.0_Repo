#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // ! condition are il;ike if esle if else if and nested if
    // int a = 10;
    // int b = 5;
    // int sum = (a++) * (b--);
    // cout << sum << endl;

    // give me the output

    // int a = 10;
    // cout<<(++a)* (++a)<<endl;
    // cout<<(++a)* (a++)<<endl;
    // cout<<(a++)* (++a)<<endl;
    // cout<<(a++)* (a++)<<endl;

    // int n;
    // cin >> n;
    // float sum = 1;
    // for (int i = n; i > 1; i--)
    // {
    //     sum *= i;
    // }
    // cout << sum << endl;

    // int n;
    // cin >> n;
    // int sum = 0;
    // int a = 0, b = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     sum = a + b;
    //     a = b;
    //     b = sum;
    //     cout << sum << endl;
    // }
    // cout << b << " ";

    //    vector<int> arr= {1,0,1,0,1,0};
    //    int n = arr.size();

    //    for (int i = 0; i < n; i++)
    //    {
    //     arr[i]  = !arr[i];
    //    }

    //   for (int i = 0; i < n; i++)
    //   {
    //     cout<<arr[i]<<" ";
    //   }

    int n;
    cin >> n;
   int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
}