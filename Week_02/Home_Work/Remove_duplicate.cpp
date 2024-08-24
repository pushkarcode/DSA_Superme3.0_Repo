#include <iostream>
#include <vector>
#include<algorithm>  
using namespace std;
int main()
{
    vector<int> arr = {2, 1, 3, 2, 1, 1, 3, 2};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int j = 0, i = 1;
    while (i < n)
    {
        if (arr[i] == arr[j])
            i++;
        else
            arr[++j] = arr[i++];
        // else
        // {
        //     j++;
        //     arr[j] = arr[i];
        //     i++;
        // }
    }

    for (int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
    }

    // cout << j + 1;
    return 0;
}