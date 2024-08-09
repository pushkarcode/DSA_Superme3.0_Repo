#include <iostream>
using namespace std;

#include <iostream>
#include <numeric>
#include <string>
using namespace std;

bool checkTwoStringEqual(string a[], string b[])
{
    string s1 = accumulate(a, a + sizeof(a) / sizeof(a[0]), string(""));
    string s2 = accumulate(b, b + sizeof(b) / sizeof(b[0]), string(""));
    return s1 == s2;
}

int main()
{
    string w1[] = {"ab", "c"};
    string w2[] = {"a", "bcg"};
    bool check = checkTwoStringEqual(w1, w2);
    cout << "Check two string equal: " << check << endl;
    return 0;
}
