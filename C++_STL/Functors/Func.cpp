#include <iostream>
using namespace std;

namespace namespace_push
{

    int push()
    {
        return 27;
    }
}
using namespace namespace_push;
int main()
{
    int ans = push();
    cout << ans << endl;
    return 0;
}