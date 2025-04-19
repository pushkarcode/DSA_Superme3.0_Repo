//

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // int n = s.size();
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            cout << "not palindrome" << endl;
            return 0;
        }
        i++;
        j--;
    }
    {
        cout << "palindrome" << endl;
    }
}