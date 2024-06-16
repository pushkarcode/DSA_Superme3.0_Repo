#include <iostream>
#include <cmath>
using namespace std;

void fullpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";

        for (int j = 0; j < i + 1; j++)
            cout << "* ";
           for (int j = 0; j < i; j++)
           {
            cout<<"* ";
           }
            

        cout << endl;
    }
}

void inverted_fullpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "  ";

        for (int j = 0; j < n - i; j++)
            cout << "* ";
        for (int j = 0; j < n-i-1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
int main()
{
    //    float pi = 3.14;
    //    float ans, r;
    //    cin>>r;
    //    ans = pi*pow(2,r);
    //   cout<<ans<<endl;
    //    return 0;

    // int n;
    // cin>>n;
    // if(n&1) {  // ! n%2 ==0
    //     cout<<"odd"<<endl;
    // }
    // else {
    //     cout<<"even"<<endl;
    // }

    // full pyramid
    int n;
    cin >> n;
    fullpyramid(n);
    inverted_fullpyramid(n);
}