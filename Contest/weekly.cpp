// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     string s[n];
//     cout << "String character" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//     }
//     cout << "Printing the string" << endl;
//     int cnt = 0;
//     int maxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == "E")
//         {
//             cnt++;
//         }
//         else if (s[i] == "F")
//         {
//             cnt--;
//         }
//         maxi = max(maxi, cnt);
//     }
//     cout << "cnt = " << maxi << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {72, 48, 24, 3};
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int sum = arr[i] + arr[j];
                if (sum / 24)
                    cnt++;
            }
        }
    }
    cout << "cnt: " << cnt << endl;

    return 0;
}