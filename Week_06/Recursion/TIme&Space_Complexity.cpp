#include <iostream>
using namespace std;
int main()
{

    int a[3][4];
    int(*n)[3][4] = &a;

    return 0;
}