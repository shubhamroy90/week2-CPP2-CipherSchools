#include <bits/stdc++.h>
using namespace std;

class UK
{
public:
    int kms;
    int mts;
};

class US
{
public:
    int miles;
    int feet;

    US(int m, int f)
    {
        miles = m;
        feet = f;
    }

    US(UK obj)
    {
        miles = obj.kms / 1.6;
        feet = obj.mts / 0.3;
    }

    void display()
    {
        cout << miles << " miles ans " << feet << " feet" << endl;
    }

    operator UK()
    {
        UK duk;
        duk.kms = miles * 1.6;
        duk.mts = feet * 0.3;

        return duk;
    }
};

int main()
{
    US dus(5, 10);
    UK duk;

    duk = (UK)dus;

    US dus2 = duk;

    US dus2(duk);

    return 0;
}