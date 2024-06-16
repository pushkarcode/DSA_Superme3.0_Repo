#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    // creation
    // unordered_map<string, string> table;

    // insertion
    // table["in"] = "India";
    // table.insert(make_pair("en", "England"));

    // pair<string, string> p;
    // p.first = "pk";
    // p.second = "pakistan";

    // table.insert(p);

    // cout << table.size() << endl;
    // table.clear();
    // cout << table.size() << endl;

    //! traverse on map

    // unordered_map<string, string>::iterator it = table.begin();

    // while (it != table.end())
    // {
    //     pair<string, string> P = *it;
    //     cout << P.first << " " << P.second << endl;
    //     it++;
    // }

    //! find function
    // if (table.find("in") != table.end())
    // {
    //     cout << "Key Found" << endl;
    // }
    // else
    // {
    //     cout << "Key Not Found" << endl;
    // }

    //* another way

    // if(table.count("in") == 0){
    //     cout << "Key Not Found" << endl;
    // }
    // else{
    //     cout << "Key Found" << endl;
    // }

    map<int, string> push;

    push[1] = "pushu";
    push[2] = "push";
    push[3] = "pushkar";

    cout << push.size() << endl;

    map<int, string>::iterator it = push.begin();

    while (it != push.end())
    {
        pair<int, string> P = *it;
        cout << P.first << " " << P.second << endl;
        it++;
    }
    // if (push.find(-1) != push.end())
    // {
    //     cout << "Key Found" << endl;
    // }
    // else
    // {
    //     cout << "Key Not Found" << endl;
    // }

    // if(push.count(1) == 1){
    //     cout << "Key Found" << endl;
    // }
    // else {
    //     cout << "Key Not Found" << endl;
    // }

    
    return 0;
}