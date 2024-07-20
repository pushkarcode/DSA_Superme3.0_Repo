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

    // string s = "cdcd";
    // unordered_map<string, int> anagrammp;
    // int anagram_pair = 0;
    // //* genrate all sub-string and store it in map
    // for (int i = 0; i < s.length(); i++)
    // {
    //     for (int j = i; j < s.length(); j++)
    //     {
    //         string substring = s.substr(i, j - i + 1);

    //         sort(substring.begin(), substring.end());

    //         anagrammp[substring]++;
    //     }
    // }
    // //? sum all pair
    // for (auto a : anagrammp)
    // {
    //     int count = a.second;

    //     anagram_pair += (count * (count - 1)) / 2; //! (most important formula)
    // }

    // cout << anagram_pair << endl;

    //! -----Reverse Words in a String

    // string s = "  pushkar is happy  ";
    // reverse(s.begin(), s.end());
    // int n = s.size();
    // int start = 0, end = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     // skip leading spaces
    //     while (i < n && s[i] == ' ')
    //         i++;
    //     if (i == n)
    //         break; // out of bound

    //     // copy char to right position
    //     while (i < n && s[i] != ' ')
    //         s[end++] = s[i++];

    //     // after copy reverse individual word
    //     reverse(s.begin() + start, s.begin() + end);

    //     // add extra space between words
    //     s[end++] = ' ';
    //     start = end;
    // }
    // // resize the final string
    // s.resize(end - 1);
    // cout << "string: " << s << endl;

    //!-------------------- Text Justification(hard < easy🔥)

    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};

    int maxWidth = 16;

    vector<string> ans;
    vector<string> currentLine; //["this", "is", "an"]
    int currentLineTotalChars = 0;
    for (int i = 0; i < words.size(); i++)
    {
        string &currentWord = words[i];
        int currentLineNeededNumberOfSpaces = currentLine.size(); // single space after word
        if (currentLineTotalChars + currentLineNeededNumberOfSpaces + currentWord.size() > maxWidth)
        // exceeding? means, currentLine without taking currentWord is complete.
        // fully justified case
        {
            int extraSpaces = maxWidth - currentLineTotalChars;
            int spacesGoInBetweenWords = extraSpaces / max(1, (int)(currentLine.size() - 1));
            int remainder = extraSpaces % max(1, (int)(currentLine.size() - 1));

            // We don't need spaces after last word
            for (int j = 0; j < currentLine.size() - 1; j++)
            {
                // add even spaces
                for (int k = 0; k < spacesGoInBetweenWords; k++)
                    currentLine[j] += " "; // add spaces after the word.

                if (remainder > 0)
                {
                    currentLine[j] += " ";
                    remainder--;
                }
            }

            if (currentLine.size() == 1)
            {
                // left justified case, because only 1 word in the line
                while (extraSpaces--)
                    currentLine[0] += " ";
            }

            // let's prepare our final line
            string finalLine = "";
            for (string wordWithSpaces : currentLine)
                finalLine += wordWithSpaces; // string concat

            ans.push_back(finalLine);
            currentLine.clear();
            currentLineTotalChars = 0;
        }

        // currentLine is not complete
        currentLine.push_back(currentWord);
        currentLineTotalChars += currentWord.size(); // not including spaces
    }

    // Let's take care of Last Line
    // add 1 space between words
    string finalLine = "";
    for (auto word : currentLine)
        finalLine += word + " ";

    finalLine.pop_back(); // removed extra added space

    // if still maxwidth is not acheived
    int leftSpaces = maxWidth - finalLine.size();
    while (leftSpaces--)
        finalLine += " ";
    ans.push_back(finalLine);
    

    return 0;
}