#include <iostream>
#include <queue>
using namespace std;
int main()
{
    /// creation
    queue<int> myQueue;

    // insertion
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);

    cout << myQueue.size() << endl;

    // myQueue.clear();
    // cout << myQueue.size() << endl;

    myQueue.pop();
    // 20>30>40 - delete from front
    cout << myQueue.size() << endl;

    cout <<myQueue.front() << endl;
    cout <<myQueue.back() << endl;

    // Also Present Swap Method

    //! itration of elements  not possible in stack 


     return 0;
}