#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(77);
    arr.push_back(66);

    make_heap(arr.begin(), arr.end());

    // for (int a : arr)
    // {
    //     cout << a << " ";
    // }

    // insertion
    arr.push_back(100);
    push_heap(arr.begin(), arr.end());
    //  for (int a : arr)
    // {
    //     cout<<a<<" ";
    // }

    // deletion

    // pop_heap(arr.begin(), arr.end());
    // arr.pop_back();
    // for (int a : arr)
    // {
    //     cout << a << " ";
    // }

    sort_heap(arr.begin(), arr.end());
    for(int a: arr) {
        cout<<a<<" ";
    }



    return 0;
}