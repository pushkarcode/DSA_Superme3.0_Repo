#include <iostream>
using namespace std;
int find_length(char arr[], int size)
{
    int index = 0;
    int count = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }

    return count;
}

void replace_charqacter(char arr[], int size, char originalCHar, char newChar)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == originalCHar)
        {
            arr[i] = newChar;
        }
    }

    cout << arr << endl;
}

void convertIntoUpperCase(char arr[], int n)
{
    int len = find_length(arr, n);
    for (int i = 0; i < len; i++)
    {

        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
            arr[i] = ch;
        }
    }
    cout << arr << endl;
}

void convertIntoLowerCase(char arr[], int n)
{
    int len = find_length(arr, n);
    for (int i = 0; i < len; i++)
    {

        char ch = arr[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - 'A' + 'a';
            arr[i] = ch;
        }
    }
    cout << arr << endl;
}

void reverseCharArray(char arr[], int n)
{
    int leng = find_length(arr, n);
    int i = 0;
    int j = leng - 1;

    while (i <= j)
    {
        swap(arr[i++], arr[j--]);
    }

    cout << arr << " ";
}

void validPalindrom(char arr[], int n)
{
    int len = find_length(arr, n);
    int i = 0;
    int j = len - 1;
    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            cout << "not a palindrom" << endl;
            return;
        }
    }
    cout << "is a palindrom" << endl;
}

void addTwoArray(char arr[], char arr1[], int n)
{
    // cout << strcat(arr, arr1);
}

int main()
{
    //! char Arrays
    char arr[100];
    char arr1[100];
    cout << "enter yore name" << endl;
    cin >> arr;
    // cout << "enter your name2" << endl;
    // cin >> arr1;

    // cin.getline(arr, 100, '\t'); // ! size default in dailmeter
    // find_length(arr, 100);  //* find the length
    // replace_charqacter(arr, 100,'@',' ');
    // convertIntoUpperCase(arr, 100);
    // convertIntoLowerCase(arr, 100);
    // reverseCharArray(arr, 100);
    validPalindrom(arr, 100);
    // addTwoArray(arr, arr1, 100)

    // cout << "youre name is " << arr << endl;
    // cout << arr[0] << "-->" << (int)arr[0] << endl;
    // cout << arr[1] << "-->" << (int)arr[1] << endl;
    // cout << arr[2] << "-->" << (int)arr[2] << endl;
    // cout << arr[3] << "-->" << (int)arr[3] << endl;
    // cout << arr[4] << "-->" << (int)arr[4] << endl;
    // cout << arr[5] << "-->" << (int)arr[5] << endl;
    // cout << arr[5] << "-->" << (int)arr[5] << endl;

    //! strings
    // string str;

    // cout << "ENter you're Name" << endl;

    // cin>>str;
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // cout<<str[0]<<endl;
    // cout << str.length() << endl;
    // cout<<str[1]<<endl;

    // getline(cin, str, 'A');
    // string p = "pushkar";
    // string s = "sharma";
    // cout << str << " ";
    // cout << p + s << endl;

    // string name = "Hello jee keso ho sab kya hal chal";
    // string naam = "jee";
    // // cout<< name.substr(5);
    // // cout << name.find(naam) << endl;
    // if (name.find(naam) != name.npos)
    // {
    //     cout << "found" << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }

    // string s1 = "Babbar";
    // string s2 = "Babbaaszr";

    // cout << s1.compare(s2) << endl;
}
