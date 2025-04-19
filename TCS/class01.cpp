// #include <iostream>
// #include <string>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;
//! how to take array as a input ip = [1,2,3,4,5,6];

//1-D array
// int main()
// {
//     vector<int> arr;
//     string input;
//     cout << "please enter array vaslue" << endl;
//     getline(cin, input);
//     if(!input.empty() && input.front() == '[' && input.back() == ']')
//     {
//       input = input.substr(1, input.size()-1);
//     }
//     stringstream ss(input);
//     int num;
//     char c;
//     while (ss >> num)
//     {
       
//         arr.push_back(num);
//         ss >> c;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//* 2-D array input
#include<bits/stdc++.h>
using namespace std;
int main() {

    vector<int> arr;
    string inp;

    getline(cin, inp);
    //there have a one condition need to understand
    if(!inp.empty() && inp.front() == '[' && inp.back() == ']')
    {
        inp = inp.substr(1, inp.size()-1);
    }

    stringstream ss(inp);
    int num;
    char c;
    while(ss>> num) {
        arr.push_back(num);
        ss >> c;
    }
    for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] ;
        }
    



}