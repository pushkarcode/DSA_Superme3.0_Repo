#include <iostream>
#include <algorithm>
int min(int a, int b, int c)
{
    return std::min(a, std::min(b, c));
}
using namespace std;
int count_Arregment(int n)
{
    // base case
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    //* recursive class
    int ans = (n - 1) * (count_Arregment(n - 1) + count_Arregment(n - 2));
    return ans;
}

int get_paint_way(int n, int k)
{
    // base case
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k + k * (k - 1);
    }
    //---recursive call
    int ans = (k - 1) * (get_paint_way(n - 1, k) + get_paint_way(n - 2, k));
    return ans;
}

int edit_distance(string &str1, string &str2, int i, int j)
{
    // base case
    if (i >= str1.length())
    {
        // means str1 size less then word2 size
        return str2.length() - j;
    }
    if (j >= str2.length())
    {
        // means str1 size less then str2 size
        return str1.length() - i;
    }

    int ans = 0;
    if (str1[i] == str2[j])
    {
        i++;
        j++;
        ans = edit_distance(str1, str2, i, j);
    }
    else
    {
        // 3- case
        // insert
        int op1 = 1 + edit_distance(str1, str2, i, j + 1);
        // delete
        int op2 = 1 + edit_distance(str1, str2, i + 1, j);
        // replace
        int op3 = 1 + edit_distance(str1, str2, i + 1, j + 1);
        ans = min(op1, op2, op3);
    }

    return ans;
}

int main()
{
    //!----------completed leetcode two problems
    //?---------- house robber1 and house robber2

    //!------------Count Dearegment----------

    // int n = 4;
    // int ans = count_Arregment(n);
    // cout << "Possible arregement " << ans;

    //!--------(Painting Fence Algorithm)------DP

    // int n = 3;
    // int k = 3;
    // int ans = get_paint_way(n, k);
    // cout << ans << endl;

    //!-----------(edit distance)--------
    // string str1 = "horse";
    // string str2 = "ros";
    // int i = 0;
    // int j = 0;
    // int ans = edit_distance(str1, str2, i, j);
    // cout << "Edit distance " << ans << endl;


    //!-------------(maximum Squaare)-------

    // see on leetcode 221 problem golu


    return 0;
}