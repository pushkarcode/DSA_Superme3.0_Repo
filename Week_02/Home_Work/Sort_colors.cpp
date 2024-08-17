#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //! first method stl sort function
    //? secand count 0 1 2 method
    //* -----last but effective (dutch national flag algorithm)

    vector<int> arr = {1, 1, 0, 2, 0, 1, 2, 0, 1};
    int n = arr.size();

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high--]);
        }
    }

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}