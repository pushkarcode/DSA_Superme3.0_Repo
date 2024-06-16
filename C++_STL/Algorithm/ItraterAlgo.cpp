#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printDuble(int a)
{
    cout << a * 2 << endl;
}

bool checkEven(int a)
{
    return a % 2 == 0;
}
int main()
{
    // vector<int> arr = {10,10, 20, 30, 40,50,40, 50, 60};

    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout << *it << endl;

    // int tag = 27;
    // auto it = count(arr.begin(), arr.end(), tag);
    // cout << it << endl;

    // for_each(arr.begin(), arr.end(), printDuble);
    // int target = 400;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout << *it << endl;

    // sort(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.end());

    // for (auto &&GOLO : arr)
    // {
    //     cout << GOLO << " ";
    // }
    // cout << endl;

    // rotate(arr.end(), arr.begin() + 2, arr.begin());

    // for (auto &&GOLO : arr)
    // {
    //     cout << GOLO << " ";
    // }

    // auto it = unique(arr.begin(), arr.end());

    // arr.erase(it, arr.end());
    // for (int a: arr)
    // {
    //  cout<<a <<" ";
    // }

    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;

    auto it = partition(arr.begin(), arr.end(), checkEven);
    for (int a : arr)
    {
        cout << a << " ";
    }

    return 0;
}