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

    // // brute force method

    // string s = "mom";

    // // srep: 1 find all the substring

    // unordered_map<string, int> freqMap;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     for (int j = i; j < s.length(); j++)
    //     {
    //         string substring = s.substr(i, j - i + 1);
    //         sort(substring.begin(), substring.end());
    //         freqMap[substring]++;
    //     }
    // }

    // int count = 0;
    // for (const auto &pair : freqMap)
    // {
    //     int freq = pair.second;
    //     if (freq > 1)
    //     {
    //         count += (freq * (freq - 1)) / 2;
    //     }
    // }
    // cout << "count: " << count << endl;

    //?------------optimized way---------------------

    

    

    return 0;
}