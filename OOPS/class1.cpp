#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    //-----non perametrized constructor--------
    // Teacher()
    // {
    //     // cout << "hey buudy  iam constructor" << endl;
    //     dept = "computer science";
    // }

    //----- perametrized constructor--------
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    //*properties ------- attributes
    string name;
    string dept;
    string subject;

    //!-----methods / meber functions

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "dept: " << dept << endl;
    }
};

class Account
{
private:
    double balance;
    string password; // data hiding

public:
    string accountID;
    string username;
};

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    // destructer for deallocation the memory
    ~Student()
    {
        cout << " hii i am delete the memory" << endl;
        delete cgpaPtr;
    }

    void getdata()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};
int main()
{
    // this is called the model of the stroy and this thing is very important and there is too important thin
    // Teacher t1("pushkar", "CSE", "c++", 25000); // constructer call
    // // t1.name = "pushkar";
    // // t1.subject = "c++";
    // // t1.dept = "cse";
    // // t1.salary = 25000;
    // // t1.getInfo();

    // Teacher t2(t1);
    // t2.getInfo(); //* copy constructor

    // cout << t1.dept << endl;

    //!-------------------------Student class objects------

    Student s1("Raj", 8.1);
    Student s2(s1);

    *(s2.cgpaPtr) = 9.6;
    s1.getdata();

    s2.name = "neha";
    s2.getdata();

    return 0;
}