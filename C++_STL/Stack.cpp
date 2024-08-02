#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creation
    stack<int> s;

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.size() << endl;
    // deletion

    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl; 
    // cout<< s.empty()<<endl;

    // swap elements , empty check, that it
    //! itration of elements  not possible in stack
    
     

    return 0;
}