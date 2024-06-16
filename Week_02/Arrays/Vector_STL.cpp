#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int arr[n] = {0};
    // int *arr = new int[n];
    // fill(arr, arr + n, 7);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin >> data;
    //     v.push_back(data);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int> arr{1, 2, 3, 4, 5, 6};

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr.at(i) << " ";
    // }

    //! fucking classy method to print vector
    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
    cout << arr[0] << endl;
    cout << arr[arr.size() - 1] << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    // cout << arr.end() << endl;

    // cout << "Start the vector vidoe" << endl;
}