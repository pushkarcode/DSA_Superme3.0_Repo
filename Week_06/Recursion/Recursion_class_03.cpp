#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

bool check_sorted(vector<int> &arr, int size, int index)
{
    // base case
    if (index == size - 1)
        //?single element array treate as sorted array
        return true;

    // recuirisve call
    bool curAns = false;
    bool recursionAns = false;

    if (arr[index + 1] > arr[index])
    {
        curAns = true;
    }

    recursionAns = check_sorted(arr, size, index + 1);

    return curAns && recursionAns;
}

bool check_sorted_des_order(vector<int> &arr, int size, int index)
{
    // base case
    if (index == size - 1)
        return true;

    // revursive call
    bool curAns = false;
    bool recursionAns = false;

    if (arr[index] > arr[index + 1])
    {
        curAns = true;
    }

    recursionAns = check_sorted_des_order(arr, size, index + 1);

    return (curAns && recursionAns);
}

void printSubSequence(string str, int i, string output, vector<string> &ans)
{
    // base case
    if (i == str.length())
    {
        // cout << output << endl;
        ans.push_back(output);
        return;
    }

    // 1 case hum slove karenge baaki recursion
    char ch = str[i];

    // include
    printSubSequence(str, i + 1, output + ch, ans);
    // exclude
    printSubSequence(str, i + 1, output, ans);
}

int houseRobber(vector<int> &arr, int i, int n)
{
    // base case
    if (i >= n)
    {
        return 0;
    }

    // recursive call + include exclude
    // include
    int include = arr[i] + houseRobber(arr, i + 2, n);
    // exclude
    int exclude = houseRobber(arr, i + 1, n);

    return max(include, exclude);
}

int coin_check(vector<int> &arr, int amount)
{
    // base case
    if (amount == 0)
    {
        // means kitne coins chiye 0 banane ke liye
        return 0;
    }
    int minCoin = INT_MAX;
    // traverse all coins on amount
    for (int i = 0; i < arr.size(); i++)
    {
        // first coins in array
        int coin = arr[i];
        // check if coin >= amount not used recurive call
        // if coin <= amount used recursive call
        if (coin <= amount)
        {
            int recursionAns = coin_check(arr, amount - coin);
            // pata nahi recursaion  ka answer sahi hei ya nahi
            // if recursion answer == intmax --> invalid case
            //   recursion answer != intmax ---> valid case
            if (recursionAns != INT_MAX)
            {
                int coinUsed = 1 + recursionAns;
                minCoin = min(coinUsed, coinUsed);
            }
        }
    }
    return minCoin;
}

int main()
{

    // vector<int> arr = {60, 50, 40, 30};
    // int size = arr.size();
    // int index = 0;

    // bool ans = check_sorted(arr, size, index);
    // cout << ans << endl;

    //!----------write function for desending order

    // bool ans = check_sorted_des_order(arr, size, index);
    // cout << ans << endl;

    //*--------(include _ execlide patteren)
    //!-----------(sub-sequance wala patteren)

    // string str = "gou ";
    // string output = "";

    // vector<string> ans;
    // printSubSequence(str, 0, output, ans);

    // cout << ans.size() << endl;
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }

    //!---------- House robber---------

    // vector<int> arr = {1, 2, 3, 1};
    // int n = arr.size();
    // int index = 0;
    // int ans = houseRobber(arr, index, n);
    // cout << ans << endl;

    //!----------(Doop Question Coin change ---> chage your life also)

    // // vector<int> arr = {1, 2, 5};
    // int amount = 11;

    // int ans = coin_check(arr, amount);
    // if (ans == INT_MAX)
    // {
    //     cout << "No solution found" << endl;
    // }
    // else
    // {
    //     cout << "Min coin change required: " << ans << endl;
    // }

    return 0;
}