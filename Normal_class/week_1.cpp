// #include <iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     // cout << "enter a number" << endl;
//     // cin >> n;

//     // if (cin.fail())
//     // {
//     //     cout << "faild" << endl;
//     // }
//     // else
//     // {
//     //     cout << "success" << endl;
//     // }

// }

#include <iostream>
using namespace std;
// void party()
// {
//     cout << "party with normal people" << endl;
//     return;
// }
// void drive()
// {
//     cout << "drive with normal people" << endl;
//     return;
// }

// namespace Pushkar
// {
//     void party()
//     {
//         cout << "party with pushkar" << endl;
//         return;
//     }

//     void drive()
//     {
//         cout << "drive with pushkar" << endl;
//         return;
//     }

// }

// ! check the prime nuber

bool checkprime(int N)
{
    if (N <= 0)
        return false;
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // party();
    // drive();
    // cout<<"now some awsome stuff with pushlkar"<<endl;

    // Pushkar::party();
    // Pushkar::drive();
    // return 0;

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {

    //     bool isprime = checkprime(i);

    //     if (isprime)
    //     {
    //         cout<<"prime:" << i << endl;
    //     }
    //     else {
    //         cout<<"not prime:" << i << endl;
    //     }
    // }
    cout<<~(5);



    
}