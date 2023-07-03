#include <bits/stdc++.h>
using namespace std;

class Time
{
public:
    int hour;
    int m;

    Time(int mins)
    {
        hour = mins / 60;
        m = mins % 60;
    }

    void display()
    {
        cout << "The time is " << hour << " hours and " << m << " minutes" << endl;
    }

    operator int()
    {
        return (this->hour * 60) + m;
    }
};

int main()
{
    Time t(340);

    int time_int_min = (int)t;
    cout << "Time in mins is " << time_int_min << endl;
}