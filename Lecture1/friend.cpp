#include <bits/stdc++.h>
using namespace std;

class Student
{
    string passcode;

protected:
    int age;

public:
    string name;
    int id;

    void into()
    {
        cout << "My name is " << name << ", my id is " << id << " and passcode is " << passcode << endl;
    }

    void setPass(string s, int a)
    {
        passcode = s;
        age = a;
    }

    friend class BestFriend;
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
    Student s1;
    s1.setPass("0001", 10);

    BestFriend bff;
    bff.sharingSecret(s1);

    return 0;
}
