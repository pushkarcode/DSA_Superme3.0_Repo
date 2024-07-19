#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

// vector<int> topKFrequent(vector<int> &nums,int k) {
//     //count frequency

// }

int main()
{

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 1;


    unordered_map<int, int> freqMap;
    for (int num : nums)
    {
        freqMap[num]++;
    }

    priority_queue<pair<int, int>> pq;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it)
    {
        pq.push(make_pair(it->second, it->first));
    }

    vector<int> result;
    for (int i = 0; i < k; ++i)
    {
        result.push_back(pq.top().second);
        pq.pop();
    }

    cout << "Example 1 Output: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;


    
    return 0;
}