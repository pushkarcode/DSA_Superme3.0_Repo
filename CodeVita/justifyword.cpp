#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canFit(const vector<string> &words, int lineLen, int wordsUsed, int currLineLen, int currLineWords, int lines)
{
    if (lines == 0)
    {
        return false; // No more lines available
    }
    if (wordsUsed == words.size())
    {
        return true; // All words placed
    }

    if (currLineWords == 0)
    {
        // Start a new line
        return canFit(words, lineLen, wordsUsed + 1, words[wordsUsed].size(), 1, lines - 1);
    }

    // Try to fit the word in the current line
    if (currLineLen + words[wordsUsed].size() + currLineWords <= lineLen)
    {
        return canFit(words, lineLen, wordsUsed + 1, currLineLen + words[wordsUsed].size() + currLineWords, currLineWords + 1, lines);
    }

    // If the word doesn't fit, try a new line
    return canFit(words, lineLen, wordsUsed, 0, 0, lines - 1);
}

int maxWords(const vector<string> &words, int lines, int lineLen)
{
    int low = 0, high = words.size();
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (canFit(words, lineLen, 0, 0, 0, lines))
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low - 1;
    //then excute last programe gfnbfb cvndcvbnf cfb
}

int main()
{
    int K;
    cin >> K;

    vector<string> words(K);
    for (int i = 0; i < K; ++i)
    {
        cin >> words[i];
    }

    int N, M;
    cin >> N >> M;

    cout << maxWords(words, N, M) << endl;

    return 0;
}