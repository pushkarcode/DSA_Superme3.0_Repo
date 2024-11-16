#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

struct Line
{
    int x1, y1, x2, y2;
};

int countCells(Line line, pair<int, int> star, bool split)
{
    if (line.x1 == line.x2)
    {
        if (split)
        {
            return min(abs(star.second - line.y1), abs(star.second - line.y2)) + 1;
        }
        else
        {
            return abs(line.y1 - line.y2) + 1;
        }
    }
    else
    {
        if (split)
        {
            return min(abs(star.first - line.x1), abs(star.first - line.x2)) + 1;
        }
        else
        {
            return abs(line.x1 - line.x2) + 1;
        }
    }
}

bool intersects(Line a, Line b, pair<int, int> &intersection)
{
    if (a.x1 == a.x2 && b.y1 == b.y2)
    {
        if (b.x1 <= a.x1 && a.x1 <= b.x2 && a.y1 <= b.y1 && b.y1 <= a.y2)
        {
            intersection = {a.x1, b.y1};
            return true;
        }
    }
    if (a.y1 == a.y2 && b.x1 == b.x2)
    {
        if (a.x1 <= b.x1 && b.x1 <= a.x2 && b.y1 <= a.y1 && a.y1 <= b.y2)
        {
            intersection = {b.x1, a.y1};
            return true;
        }
    }
    return false;
}

int main()
{
    int N;
    size_t K; // Use size_t for K to match vector::size() type

    cin >> N >> K;

    vector<Line> lines(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> lines[i].x1 >> lines[i].y1 >> lines[i].x2 >> lines[i].y2;
        if (lines[i].x1 > lines[i].x2 || (lines[i].x1 == lines[i].x2 && lines[i].y1 > lines[i].y2))
        {
            swap(lines[i].x1, lines[i].x2);
            swap(lines[i].y1, lines[i].y2);
        }
    }

    map<pair<int, int>, vector<Line>> stars;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            pair<int, int> intersection;
            if (intersects(lines[i], lines[j], intersection))
            {
                stars[intersection].push_back(lines[i]);
                stars[intersection].push_back(lines[j]);
            }
        }
    }

    int placementlelo = 0;
    for (auto &star : stars)
    {
        if (star.second.size() / 2 == K)
        {
            vector<int> intensities;
            for (auto &line : star.second)
            {
                intensities.push_back(countCells(line, star.first, true));
            }
            placementlelo += *min_element(intensities.begin(), intensities.end());
        }
    }
    cout << placementlelo << endl;
    return 0;
}