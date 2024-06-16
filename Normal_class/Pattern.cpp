#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          if(i == 0 || i == 3) {
            cout<<"* ";
          }
          else {
            if(j ==0 || j == 4) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }                              // if(i == 0 || i == last-1|| j == 0 || j == last-1)
          }
        }
        cout << endl;
    }

    // *
    // * *
    // * * *
    int n;
    cin >> n;
    //    for (int i = 0; i < n; i++)
    //    {
    //    for (int j = 0; j < i+1; j++)
    //    {
    //     cout<<"*";
    //    }
    //    cout<<endl;
    //    }

    //! oposite of this

    //  for (int i = 0; i < n; i++)
    //    {
    //    for (int j = 0; j < n-i; j++)
    //    {
    //     cout<<"*";
    //    }
    //    cout<<endl;
    //    }

    // hollow half pyramid

    // for (int i = 0; i < n; i++)
    // {
    //     int totalcol = i+1;
    //     for (int j = 0; j < totalcol; j++)
    //     {
    //       if(i == 0 || i == n-1|| j == 0 || i == j) {
    //         cout<<"* ";
    //       }
    //       else {
    //         cout<<"  ";
    //       }
    //     }
    //     cout << endl;
    // }

    // opposite og hollow pyramid
    //  for (int i = 0; i < n; i++)
    // {
    //     int totalcol = n-i;
    //     for (int j = 0; j < totalcol; j++)
    //     {
    //       if(i == 0 || i == n-1|| j == 0 || (i+j == n-1)) {
    //         cout<<"* ";
    //       }
    //       else {
    //         cout<<"  ";
    //       }
    //     }
    //     cout << endl;
    // }

    // OPTIMIZED
    // for (int i = 0; i < n; i++)
    // {
    //     int col = n - i;
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i == 0 || i == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (j == 0 || j == n-i-1)
    //             {
    //                 cout << "* ";
    //             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     // esse mai bhul jata hu
    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     int tempcol  = n-i;  // i+1
    //     // int sum = 1;
    //     for (int j = 0; j < tempcol; j++)
    //     {
    //        cout<<(j+1);
    //     }
        
    //     cout << endl;
    // }
    

    return 0;
}