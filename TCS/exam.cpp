#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = arr.size() - 1;
    int sum = 0;
    while (i < j)
    {
        if (arr[i] >= arr[j])
        {
            sum += arr[i];
            i++;
        }
        else if (arr[i] <= arr[j])
        {
            sum += arr[j];
            j--;
        }
      
    }
    cout << sum << endl;

    return 0;
}