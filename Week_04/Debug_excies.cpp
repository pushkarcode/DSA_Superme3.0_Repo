#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
using namespace std;

int mystoi(string s)
{
    int len = s.size();
    double num = 0;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    bool negative = s[i] == '-';
    negative == true ? i++ : i;
    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + s[i] - '0';
        i++;
    }
    num = negative ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    return int(num);
}
string addBinary(string a, string b)
{
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i > 0)
            carry += a[--i] - '0';
        if (j > 0)
            carry += b[--j] - '0';
        ans += carry % 2 + '0';
        carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
}

void reverseString(char input[], int n, int start)
{
    for (int i = start, j = n - 1 + start; i != j; i++, j--)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[])
{
    int start = 0, count = 1, i = 0;
    while (input[i] != '\0')
    {
        i++;
        count++;
        if (input[i] == '\0' || input[i] == ' ')
        {
            reverseString(input, count - 1, start);
            start = i + 1;
            count = 0;
        }
    }
}

bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string sortVowels(string s)
{
    string t = s;
    vector<char> vowel;
    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
            vowel.push_back(s[i]);
    }

    if (vowel.size() == 0)
        return s;

    sort(vowel.begin(), vowel.end());

    int j = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (isVowel(t[i]))
        {
            t[i] = vowel[j++];
        }
    }

    return t;
}

 
string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";
        int i = 0, j = 0;

        while (i < m || j < n) {
            if (i < m) {
                result.push_back(word1[i++]);
            }
            if (j < n) {
                result.push_back(word2[j++]);
            }
        }

        return result;
    }
int main()
{

    // string str = "pus   - hkar";
    // int num = mystoi(str);
    // cout << "num: " << num << endl;

    // string str1 = "push", str2 = "kar";
    // string sum = addBinary(str1, str2);
    // cout << "sum: " << sum << endl;

    // char str[] = "Hello World!";
    // reverseEachWord(str);
    // cout << str << "dsgd" << endl;
    // // Output: "!dlroW olleH"

    // string vov = "AEIFJG";
    // cout << sortVowels(vov) << endl;

    string word1 = "abc", word2 = "pqr";
    cout << mergeAlternately(word1, word2) << endl; // Output: "apbqcr"

    return 0;
}