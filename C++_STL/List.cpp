#include <iostream>
#include <list>
using namespace std;
int main()
{
    // creation
    // list<int> myList;

    // insertion
    // myList.push_back(10);
    // myList.push_back(30);
    // myList.push_back(40);
    // myList.push_back(60);
    // myList.push_front(7);

    // deletion
    // myList.pop_back();
    // myList.pop_front();

    // cout << myList.size() << endl;

    //? Treverse LinkeList

    // cout << "Before Removing" << endl;
    // list<int>::iterator it = myList.begin();
    // while (it != myList.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }
    // cout << endl;

    // myList.remove(30);

    // cout << "After Removing" << endl;
    // list<int>::iterator it2 = myList.begin();
    // while (it != myList.end())
    // {
    //     cout << *it2 << " ";
    //     it2++;
    // }
    // cout << endl;
    // cout << myList.size() << endl;

    // another way swap the list
    list<int> push;

    push.push_back(10);
    push.push_back(20);
    push.push_back(30);

    list<int> push2;
    push2.push_back(100);
    push2.push_back(200);
    push2.push_back(300);

    list<int>::iterator it = push.begin();
    while (it != push.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    push.swap(push2);

    list<int>::iterator it2 = push.begin();
    while (it2 != push.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    cout << push.size() << endl;

    push.erase(push.begin(), push.end());
    cout << push.size() << endl;
    return 0;
}