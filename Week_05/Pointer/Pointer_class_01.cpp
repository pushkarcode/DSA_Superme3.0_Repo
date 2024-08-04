#include <iostream>
using namespace std;
int main()
{

    //! Ambigus code not sure what the output is coming
    // int *ptr;
    // cout << *ptr;

    // //? good practice
    // int *ptr = 0;
    // cout << *ptr;

    // int a = 7;
    // int *ptr = &a;
    // cout << *ptr;

    // int a = 5;
    // int *p = &a;
    // //?copying the address of p to q
    // int *q = p;

    //! pointer to an array

    // int arr[] = {10, 20, 03, 04};
    //    int* ptr = arr;

    // arr = arr + 1; //error can't modify the value

    //! pointer to an chracter array

    // char ch[100] = "pushkarsharma";
    // //base address
    // cout<<&ch<<endl;
    // char *cptr = ch;

    // cout << cptr << " ";

    // char ch[100] = "Babbar";
    // char *cptr = ch;

    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << ch[0] << endl;
    // cout << &cptr << endl;
    // //* this fucking two are diffrent fouces
    // cout << *cptr << endl;
    // cout << *(cptr + 3) << endl;
    // cout << cptr  << endl;

    char ch[10] = "RacecaR";
    char *cptr = &ch[0];

    cout << "ch " << ch << endl;
    cout << "&ch " << &ch << endl;
    cout << "*(ch+3) " << *(ch + 3) << endl;
    cout << "cptr " << cptr << endl;
    cout << "&cptr " << &cptr << endl;
    cout << "*(cptr+3) " << *(cptr + 3) << endl;
    cout << "cptr+2 " << cptr + 2 << endl;
    cout << "*cptr " << *cptr << endl;

    return 0;
}