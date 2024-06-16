#include <iostream>
#include <deque>
using namespace std;
int main()
{
    // creation
    deque<int> dq;

    // insertion

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    dq.push_front(100);
    //  100>10>20>30
    // deletion
    dq.pop_back();
    dq.pop_front();
    // 10>20

    // cout << dq.size() << endl;
    // cout << dq.front() << endl;
    // cout << dq.back() << endl;

    deque<int>::iterator it = dq.begin();

    while (it != dq.end())
    {
        cout << *it << endl;
        it++;
    }

    return 0;
}
