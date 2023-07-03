#include <bits/stdc++.h>
using namespace std;

class Time
{
public:
    int hour;
    int min;

    Time(int m)
    {
        hour = m / 60;
        min = m % 60;
    }

    void display()
    {
        cout << hour << " " << min << endl;
    }
};

int main()
{
    int min_from_mid_night = 330;

    Time t(min_from_mid_night);
    t.display();

    return 0;
}