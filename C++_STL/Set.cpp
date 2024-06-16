#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{

    unordered_set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);

    unordered_set<int>::iterator it = st.begin();

    while (it != st.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}