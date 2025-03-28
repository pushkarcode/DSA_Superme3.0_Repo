#include <iostream>
using namespace std;

// class Person
// {
// public:
//     string name;
//     int age;

//     // Person(string name, int age)
//     // {
//     //     this->name = name;
//     //     this->age = age;
//     // }
//     ~Person()
//     {
//         cout << "parent destructer" << endl;
//     }
// };

// class Student : public Person
// {
// public:
//     int rollno;
//     ~Student()
//     {
//         cout << "child destrcter" << endl;
//     }

//     void getInfo()
//     {
//         cout << "name: " << name << endl;
//         cout << "age: " << age << endl;
//         cout << "rollno: " << rollno << endl; //! derived from person class
//     }
// };

class Student
{

public:
    string name;

    // non-peramterized constructor
    Student()
    {
        cout << "non-peramterized constructor" << endl;
    }

    Student(string name)
    {
        this->name = name;
        cout << "peramterized constructor" << endl;
    }
};

int main()
{
    // Student s1;
    // s1.name = "pushkar sharma";
    // s1.age = 21;
    // s1.rollno = 123;

    // s1.getInfo();

    Student s1("golu");
    return 0;
}