#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <limits.h>
using namespace std;

vector<int> findComplment(vector<int> binary)
{
    int n = binary.size();
    vector<int> twosComp(n + 1, 0);

    //! Step 1: flip the bits
    for (int i = n - 1, k = twosComp.size() - 1; i >= 0; i--, k--)
    {
        twosComp[k] = binary[i] == 0 ? 1 : 0;
    }
    //? 1's complement
    // for (int i = 0; i < twosComp.size(); i++)
    // {
    //     cout << twosComp[i] << " ";
    // }
    // cout<<endl;

    //! Step 2: add +1 to array
    int carry = 1;
    for (int i = twosComp.size() - 1; i >= 0; i--)
    {
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2;
        //! optimization
        if (carry == 0)
        {
            break;
        }
    }

    return twosComp;
}

int main()
{
    // unordered_map<int, int> table; // roll_no desk_no

    // // insertion
    // table[1] = 53;
    // table[2] = 27;
    // table[3] = 37;
    // table[4] = 47;

    // ! itrate over hash_map
    //    unordered_map<int,int> ::iterator it = table.begin();
    //     while(it!= table.end())
    //     {
    //         cout << it->first << " " << it->second << endl;
    //         it++;
    //     }

    //! another way
    // for (auto it : table)
    // {
    //     int key = it.first;
    //     int value = it.second;

    //     cout << "key: " << key << " " << "value: " << value << endl;
    // }

    //! find inside hash_map
    // if(table.find(250) != table.end()){
    //     cout << "found" << endl;
    // }
    // else {
    //     cout << "not found" << endl;
    // }

    //!--------------------------ARRAY_Questions-------------

    //! 2's complement
    // vector<int> binary = {0, 1, 1, 0, 1, 0, 1};
    // vector<int> twosComp = findComplment(binary);

    // for (auto &&i : twosComp)
    // {
    //     cout << i << " ";
    // }

    //? unique element

    // vector<int> arr = {4, 1, 2, 1, 2};
    // int n = arr.size();

    //! Step 1: sort the array
    // sort(arr.begin(), arr.end());
    // int ans = -1;
    // for (int i = 0; i < n;)
    // {
    //     if (i + 1 < n && arr[i] == arr[i + 1])
    //     {
    //         i += 2;
    //     }
    //     else
    //     {
    //         ans = arr[i];
    //         break;
    //     }
    // }
    // cout << ans << endl;

    //! Step 2: using hash_map
    // unordered_map<int, int> freqMap;

    // for (int i = 0; i < n; i++)
    // {
    //     int num = arr[i];
    //     freqMap[num] = freqMap[num] + 1;
    // }

    // auto it = freqMap.begin();
    // int ans = -1;
    // while (it != freqMap.end())
    // {
    //     int key = it->first;
    //     int freq = it->second;
    //     if (freq == 1)
    //     {
    //         ans = key;
    //         break;
    //     }

    //     it++;
    // }
    // cout << ans << endl;

    //! Rotate Image
    // vector<vector<int>> arr(3, vector<int>(3, 0));
    // int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     // reverse(arr[i].begin(), arr[i].end());
    //     // int start = 0;
    //     // int end = n - 1;
    //     // while (start < end)
    //     // {
    //     //     swap(arr[i][start],
    //     //          arr[i][end]);
    //     //     start++;
    //     //     end--;
    //     // }
    // }
    // //* print the array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //! Maximum SUb array ---(Kadance Algo)

    // vector<int> arr = {-8, 2, -4, 3, -5, 1};
    // int n = arr.size(), sum = 0;
    // int ans = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    //     ans = max(ans, sum);
    //     if (sum < 0)
    //         sum = 0;
    // }

    // cout << "ans : " << ans << endl;
    //

    //! Missing Number from array with duplicate

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << arr.size() << endl;
    arr.insert(arr.begin(), 27);
    cout << arr.size() << endl;

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}