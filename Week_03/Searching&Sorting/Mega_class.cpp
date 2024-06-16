#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int mySqrt(int n)
{
    int s = 0, e = n;

    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) >> 1;

        if (mid * mid <= n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double myPrecision(int n)
{
    double sqrt = mySqrt(n);
    int precision = 13;
    double step = 0.1;
    while (precision--)
    {
        double j = sqrt;
        while (j * j <= n)
        {
            // store and compute
            sqrt = j;
            j += step;
        }
        // in fiest step got .1 precsion
        step /= 10;
    }
    return sqrt;
}

double BSPrecision(int n)
{
    double s = 0, e = n;
    double ans = 0;
    while ((e - s) > 0.00000000000001)
    {
        double mid = (s + e) / 2;
        double sqr = mid * mid;

        if (sqr <= n)
        {
            ans = mid;
            s = mid;
        }
        else
        {
            e = mid;
        }
    }
    return ans;
}

double getQuient(int dividend, int divisor)
{
    double s = 0, e = dividend;
    double ans = 0;
    while ((e - s) > 0.001)
    {
        double mid = (s + e) / 2;
        if ((divisor * mid) <= dividend)
        {
            ans = mid;
            s = mid;
        }
        else
        {
            e = mid;
        }
    }
    return ans;
}

bool kokoBananavalue(vector<int> &arr, int h, int k)
{
    long long totaltime = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totaltime += ceil(arr[i] / (double)k);
    }
    return totaltime <= h;
}

bool canWeMakeMbuque(vector<int> &arr, int m, int k, int D)
{
    int counter = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // check flower bloom or not
        if (arr[i] <= D)
        {
            // bloom ho gya
            counter++;
        }
        if (counter == k)
        {
            m--;
            // i buquet make
            counter = 0;
            if (m == 0)
            {
                break;
            }
        }
        // not bloomed
        if (arr[i] > D)
        {
            counter = 0;
        }
    }
    return m == 0;
}

int main()
{
    // ! Mega class of searching and sorting

    //*-----------Square root of search-------------------------

    // int n = 63;
    // double ans = myPrecision(n);
    // // cout << ans << endl;
    // //! cout only prints 5 decimal value
    // // so use prinf
    // printf("%.13f\n", ans);

    // ans = BSPrecision(n);
    // printf("%.13f\n", ans);

    //!---------------------number divide without using %/ oprater)---------
    // int dividend = 678;
    // int divisor = 5;
    // double ans = getQuient(abs(dividend), abs(divisor));
    //  if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    // {
    //     ans = 0 - ans;
    // }
    // cout << "Final ans: " << ans << endl;
    // cout << ans;

    //!----------------------Koko Eating banana----------

    // vector<int> arr = {30, 11, 23, 4, 20};
    // int n = arr.size();

    // int s = 0;
    // int e = *max_element(arr.begin(), arr.end());
    // int ans = 0;
    // int h = 5;
    // while (s <= e)
    // {
    //     int mid = (s + e) >> 1;
    //     int k = mid;
    //     if (kokoBananavalue(arr, h, k))
    //     {
    //         ans = k;
    //         e = mid - 1;
    //     }
    //     else
    //     {
    //         s = mid + 1;
    //     }
    // }

    // cout << ans << endl;

    //!-------------Minimum Number of Days to Make m Bouquets------------

    // vector<int> arr = {1, 10, 3, 10, 2};
    // int k = 1, m = 3;
    // long long int requriment = (long long int)m * (long long int)k;
    // if (arr.size() < requriment)
    //     return -1;
    // int s = *min_element(arr.begin(), arr.end());
    // int e = *max_element(arr.begin(), arr.end());
    // int ans = 0;
    // while (s <= e)
    // {
    //     int mid = (s + e) >> 1;
    //     int days = mid;
    //     if (canWeMakeMbuque(arr, m, k, days))
    //     {
    //         ans = mid;
    //         e = mid - 1;
    //     }
    //     else
    //         s = mid + 1;
    // }
    // cout << ans << endl;

    //!------------------Find Peak Element--------------------

    // int a = 5;
    // int b = a;
    // int c = &a;

    // int a = 5;
    // int *ptr = &a;
    // cout<< sizeof(ptr);

    // long l = 5;
    // long* ptr = &l;
    // cout<< sizeof(ptr);

    // int* ptr;
    // cout<<*ptr;

    // int arr[] = {1,2,3,4,5};
    // arr = arr+1;

    char *ptr = "pusgkae";

        return 0;
}