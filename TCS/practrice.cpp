// #include <iostream>
#include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // string s;
//     // getline(cin, s);

//     // int star_cny = 0;
//     // int hash_cnt = 0;

//     // for (char c : s)
//     // {
//     //     if (c == '*')
//     //     {
//     //         star_cny++;
//     //     }
//     //     else if (c == '#')
//     //     {
//     //         hash_cnt++;
//     //     }
//     // }

//     // cout << star_cny - hash_cnt << "\n";

//     // return 0;

//     // vector<int> arr = {7, 4, 8, 2, 9};

//     // int count = 1;
//     // int maxi = arr[0];
//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     if (arr[i] > maxi)
//     //     {
//     //         maxi = arr[i];
//     //         count++;
//     //     }
//     // }
//     // cout << "count: " << count << endl;

//     int n;
//     cin >> n;
//     vector<char> arr(n);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }

//     unordered_map<char, int> freq;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         freq[arr[i]]++;
//     }

//     char ans;
//     // make a confition to check
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (freq[arr[i]] & 1)
//         {
//             ans = arr[i];
//             break;
//         }
//     }
//     cout << ans << endl;
// }

#include <iostream>
using namespace std;

bool isprime(int prime)
{
    if (prime == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= prime; i++)
    {
        if (prime % i == 0)
        {
            return false;
        }
    }
    return true;
}

void chekprime(int start, int end)
{
    int sum = 0;
    for (int i = end; i >= start; i--)
    {
        bool ans = isprime(i);
        if (ans)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}
int main()
{

    // vector<int> arr;
    // string str;
    // getline(cin, str);
    // stringstream ss(str);
    // int temp;
    // char c;
    // while (ss >> temp)
    // {
    //     arr.push_back(temp);
    //     ss >> c;
    // }

    // desi approch
    // int zero = 0, one = 0, two = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] == 0)
    //         zero++;
    //     else if (arr[i] == 1)
    //         one++;
    //     else
    //         two++;
    // }
    // // stroe in array
    // int index = 0;
    // for (int i = 0; i < zero; i++)
    // {
    //     arr[index++] = 0;
    // }
    // for (int i = 0; i < one; i++)
    // {
    //     arr[index++] = 1;
    // }
    // for (int i = 0; i < two; i++)
    // {
    //     arr[index++] = 2;
    // }

    //! babbar approch
    // int n = arr.size();
    // int low = 0, mid = 0, high = n - 1;
    // while (mid <= high)
    // {
    //     if (arr[mid] == 0)
    //     {
    //         swap(arr[mid], arr[low]);
    //         mid++, low++;
    //     }
    //     else if (arr[mid] == 1)
    //     {
    //         mid++;
    //     }
    //     else
    //     {
    //         swap(arr[mid], arr[high]);
    //         high--;
    //     }
    // }

    // cout << "output orinted" << endl;
    // for (auto elem : arr)
    // {
    //     cout << elem << " ";
    // }

    // return 0;

    //!---- another question for that thing and this thing is very important for me and that is the true thing for me and see things that are most importanf thing and thids

    // int r, c;
    // cin >> r >> c;
    // int arr[r][c];
    // // store value of array
    // int index_of_row = -1;
    // int maxi = 0;
    // for (int i = 0; i < r; i++)
    // {
    //     int cnt = 0;

    //     for (int j = 0; j < c; j++)
    //     {
    //         cin >> arr[i][j];
    //         if (arr[i][j] == 1)
    //         {
    //             cnt++;
    //         }
    //     }
    //     if (maxi < cnt)
    //     {
    //         maxi = cnt;
    //         index_of_row = i;
    //     }
    // }

    // if (index_of_row != -1)
    // {
    //     index_of_row++;
    // }

    // cout << "Index of row " << index_of_row << endl;

    // //!--- how to take n size array from user
    // vector<int> arr;
    // string str;
    // getline(cin, str);
    // //! you can check whaterver condtion you want to check
    // if(!str.empty() && str.front() == '[' && str.back() == ']')
    // {
    //   str = str.substr(1, str.size()-1);
    // }
    // stringstream ss(str);
    // int temp;
    // char c;
    // while (ss >> temp)
    // {
    //     arr.push_back(temp);
    //     ss >> c;
    // }

    // for (auto elem : arr)
    // {
    //     cout << elem << " ";
    // }

    //!-------tcs preivous year questions

    int start, end;
    cin >> start >> end;
    chekprime(start, end);
}