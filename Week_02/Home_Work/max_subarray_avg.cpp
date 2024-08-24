#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //!---------(sliding window)--------!

    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k = 4, n = arr.size();

    int i = 0, j = k - 1;
    int sum = 0;

    for (int k = i; k <= j; k++)
    {
        sum += arr[k];
    }
    int maxSum = sum;
    j++;
    while (j < n)
    {   
        sum -= arr[i++];
        sum += arr[j++];
        maxSum = max(maxSum, sum);
    }
    double ans = maxSum / (double)k;
    cout << "Maximum sum of " << k << " elements is: " << ans << endl;

    return 0;
}