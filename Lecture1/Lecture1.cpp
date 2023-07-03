#include <bits/stdc++.h>
using namespace std;

class Student
{
    string passcode;

public:
    string name;
    int id;

    void into()
    {
        cout << "My name is " << name << ", my id is " << id << " and passcode is " << passcode << endl;
    }

    void setPass(string s)
    {
        passcode = s;
    }
};

int main()
{
    Student s1;

    s1.name = "Rishabh";
    s1.id = 1;
    s1.setPass("0001");
    s1.into();

    return 0;
}
