#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "your are adult" << age;
    }
    else
    {
        cout << "you are under 18, age: " << age;
    }

    return 0;
}