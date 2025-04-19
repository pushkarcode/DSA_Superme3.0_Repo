#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
       cout<< a<<" ";
       int temp = a+b;
       a = b;
       b = temp;
    }

    // int n;
    // cin >> n;
    // bool isprime = true;
    // if (n < 2)
    //     isprime = false;
    // for (int i = 2; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isprime = false;
    //         break;
    //     }
    // }

    // cout << (isprime ? "not prime" : "prime") << endl;

    // return 0;


    
}
