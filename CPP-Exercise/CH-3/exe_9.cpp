#include<iostream>
using namespace std;

int main()
{
    cout << "Spell out a number, please: ";
    string text;
    cin >> text;

    if (text == "zero")
        cout << 0 << '\n';
    else if (text == "one")
        cout << 1 << '\n';
    else if (text == "two")
        cout << 2 << '\n';
    else if (text == "three")
        cout << 3 << '\n';
    else if (text == "four")
        cout << 4 << '\n';
    else 
        cout << "not a number I know, sorry.\n";

    return 0;
}

