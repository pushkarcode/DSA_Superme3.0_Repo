#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits.h>

using namespace std;

int minMoves(vector<string> &instruct)
{
    vector<string> directions = {"up", "down", "left", "right"};
    int s = instruct.size();
    vector<vector<vector<int>>> dp(s + 1, vector<vector<int>>(4, vector<int>(4, INT_MAX)));

   //using for base case
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            dp[0][i][j] = 0;
        }
    }

  
    for (int k = 1; k <= s; ++k)
    {
        int instrIdx = find(directions.begin(), directions.end(), instruct[k - 1]) - directions.begin();
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (dp[k - 1][i][j] != INT_MAX)
                {
                    if (instrIdx == i || instrIdx == j)
                    {
                        dp[k][i][j] = min(dp[k][i][j], dp[k - 1][i][j]);
                    }
                    else
                    {
                        dp[k][i][j] = min({dp[k][i][j], dp[k - 1][instrIdx][j] + 1, dp[k - 1][i][instrIdx] + 1});
                    }
                }
            }
        }
    }

    
    int minimumMoves = INT_MAX;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            minimumMoves = min(minimumMoves, dp[s][i][j]);
        }
    }

    return minimumMoves;
}

int main()
{
    int m;
    cin >> m;
    vector<string> instruct(m);
    //!--- taking value in string driections ---
    for (int i = 0; i < m; ++i)
    {
        cin >> instruct[i];
    }
    int res = minMoves(instruct);
    cout << res;
    return 0;
}
