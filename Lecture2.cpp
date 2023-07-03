#include <bits/stdc++.h>
using namespace std;

class Student
{
    string passcode;

public:
    string name;
    int id;

    Student()
    {
    }

    // Student(string pass, string n, int i)
    // {
    //     passcode = pass;
    //     name = n;
    //     id = i;
    // }
    Student(string passcode, string name, int id)
    {
        this->passcode = passcode;
        this->name = name;
        this->id = id;
    }

    Student(string passcode, string name, int id) : name(name), passcode(passcode), id(id)
    {
    }

    void into()
    {
        cout << "My nam is " << name << ", my id is " << id << ", my name is " << endl;
    }
};

int main()
{
    Student s1;
    Student s2("10", "Rishabh", 1);
    Student *ptrs = &s2;
    Student s3;

    s3 = s2;
    s3.into();

    // cout << (*ptrs).name << endl;
    // cout << ptrs->name << endl;

    // int a = 10;
    // int *ptri = &a;

    // if (sizeof(ptri) == sizeof(ptrs))
    // {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }

    return 0;
}