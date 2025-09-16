#include <bits/stdc++.h>    // "<bits/stdc++.h>"contains all other libraries.
using namespace std;       // to use cin and cout 

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