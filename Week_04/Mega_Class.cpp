#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <unordered_map>
using namespace std;
int main()
{
    //! Sum of Beauty of All Substrings
    // string s = "aabcb";

    // int beautyCount = 0;
    // unordered_map<char, int> mp;
    // // step: 1 create nested loops for sub-string
    // for (int i = 0; i < s.length(); i++)
    // {
    //     mp.clear();
    //     for (int j = i; j < s.length(); j++)
    //     {
    //         // find frequency in map
    //         char &ch = s[j];
    //         mp[ch]++;

    //         int mini = INT_MAX;
    //         int maxi = INT_MIN;

    //         for (auto each : mp)
    //         {
    //             maxi = max(maxi, each.second);
    //             mini = min(mini, each.second);
    //         }

    //         int beauty = maxi - mini;
    //         beautyCount += beauty;
    //     }
    // }
    // // return beautyCount;
    // cout<<"beautyCount = "<<beautyCount<<endl;

    //! Sherlock and Anagrams

    // brute force method

    string str = "mom";

    // srep: 1 find all the substring

    // unordered_map<char, char> mp;
    vector<char> arr;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            char ch = str[j];
            arr.push_back(ch);
        }
    }

    

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}