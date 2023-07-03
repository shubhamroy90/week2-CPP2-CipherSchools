#include <bits/stdc++.h>
using namespace std;

class Student
{
    string passcode;
    friend class BestFriend;

protected:
    int age;

public:
    string name;
    int id;

    Student()
    {
    }

    Student(string passcode, string name, int id)
    {
        this->passcode = passcode;
        this->name = name;
        this->id = id;
    }

    // void setter(string s, int a, string n, int i)
    // {
    //     passcode = s;
    //     age = a;
    //     name = n;
    //     id = i;
    // }

    void into()
    {
        cout << "My name is " << name << ", my id is " << id << " and passcode is " << passcode << endl;
    }

    // friend void hacker(Student s);
};

// void hacker(Student s)
// {
//     cout << s.passcode << " " << s.age << endl;
// }

class BestFriend
{
public:
    void sharingSecret(Student s)
    {
        cout << s.passcode << " " << s.age << endl;
    }
};

int main()
{
    Student s1(1, "Rishabh", "0001", 10);
    // s2.into();
    // s1.setter("0001", 10, "Rishabh", 1);
    // s1.name = "Rishabh";

    // BestFriend bff;
    // hacker(s1;)
    // bff.sharingSecret(s1);

    int a = 10;
    int *ptri = &a;

    Student *ptrs = &s1;
    cout << ptrs->name << endl;

    return 0;
}
