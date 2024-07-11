#include <iostream>
using namespace std;

string removeAdcjent(string str, int n)
{
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        char currentValue = str[i];
        if (ans.empty() || currentValue != ans.back())
        {
            ans.push_back(currentValue);
        }
        else if (currentValue == ans.back())
        {
            ans.pop_back();
        }
    }
    return ans;
}

string removeOccrancer(string str, string pattern)
{
    // ek loop chalo jab full string mai patteren mila
    while (str.find(pattern) != string::npos)
    {
        // str string mai erase karo earse function 2 argument (start
        // index) - size of delete

        str.erase(str.find(pattern), pattern.length());
    }
    return str;
}
bool checkPla(string str, int s, int e)
{
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        else
        {
            s++, e--;
        }
    }
    return true;
}

int main()
{

    // string str = "daabcbaabcbc";
    // int n = str.length();
    // string pattern = "abc";
    // string s = removeAdcjent(str, n);
    // string s = removeOccrancer(str,  pattern);

    //! vaild paindrom 2 refer leetcode for this

    // string str = "abcasdfgvsd";
    // int n = str.length();
    // int i = 0;
    // int j = n - 1;
    // while (i <= j)
    // {
    //     // same
    //     if (str[i] == str[j])
    //     {
    //         i++, j--;
    //     }
    //     // diffrent
    //     else
    //     {
    //         bool ansOne = checkPla(str, i + 1, j);
    //         bool ansTwo = checkPla(str, i, j - 1);
    //         bool finalAns = ansOne || ansTwo;
    //         // return finalAns;
    //         cout << finalAns << endl;
    //         break;
    //     }
    // } 

    // cout << true << endl;

    //?  Palindromic Substrings leetcode refer

    // cout << s << endl;
    return 0;
}