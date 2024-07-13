#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

string ordercopy;

bool cmp(char a, char b)
{

    // retru true means a >b
    //    ease b >a;

    return (ordercopy.find(a) < ordercopy.find(b));
}

void normalize(string &str)
{
    char start = 'a';
    unordered_map<char, char> mapping;

    for (int i = 0; i < str.length(); i++)
    {
        // find if mapping is already exsist or not
        if (mapping.find(str[i]) == mapping.end())
        {
            mapping[str[i]] = start;
            start++;
        }
    }

    // and that chage actual string mee to abb
    for (int i = 0; i < str.length(); i++)
    {
        char changevalu = mapping[str[i]];
        str[i] = changevalu;
    }
}

int main()
{
    //! Decode the message---------------------------
    // string str = "the quick brown fox jumps over the lazy dog";
    // string message = "vkbs bs t suepuv";

    // // 2 step process

    // //? Step-1: Create a map of the alphabets
    // unordered_map<char, char> mapping;
    // char spaceCharacter = ' ';
    // mapping[spaceCharacter] = spaceCharacter;

    // char start = 'a';
    // for (int i = 0; i < str.length(); i++)
    // {
    //     // if mapping is not assign
    //     if (mapping.find(str[i]) == mapping.end())
    //     {
    //         mapping[str[i]] = start;
    //         start++;
    //     }
    // }

    // //* step -2  decode the message
    // string decodemessage = "";
    // for (int i = 0; i < message.length(); i++)
    // {
    //     char mappedcharacter = mapping[message[i]];
    //     decodemessage.push_back(mappedcharacter);
    // }

    // cout << "Decoded Message: " << decodemessage << endl;

    //! Minimum Amount of Time to Collect Garbage------------

    // string garbage[4] = {"G", "P", "GP", "GG"};
    // int time[4] = {2, 4, 3};

    // int pickP = 0;
    // int travelP = 0;
    // int lastHpuseP = 0;

    // int pickM = 0;
    // int travelM = 0;
    // int lastHpuseM = 0;

    // int pickG = 0;
    // int travelG = 0;
    // int lastHpuseG = 0;

    // for (int i = 0; i < 4; i++)
    // {
    //    int currentHouse = garbage[i];
    //    for (int j = 0; j < currentHouse.size(); j++)
    //    {
    //     /* code */
    //    }

    // }

    //! Custom sort string

    // string str = "abcd";
    // string order = "cba";
    // ordercopy = order;

    // sort(str.begin(), str.end(), cmp);

    // cout << "orderde string :" << str << endl;

    //! find and replace the patteern;

    vector<string> words = {"eff", "dfg", "llm", "dff"};
    string pattern = "abb";

    vector<string> ans;
    // step A normalize pattern
    normalize(pattern);
    // step B words ki list mai haar ek word ko normalize karna hai
    for (int i = 0; i < words.size(); i++)
    {
        string currWord = words[i];
        normalize(currWord);
        if (currWord.compare(pattern) == 0)
        {
            ans.push_back(words[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}