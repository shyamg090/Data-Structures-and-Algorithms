#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number >= 18)
    {
        cout << "you're an adult, be responsible!!" << endl;
    }
    else if (number < 10)
    {
        cout << "you're not an adult but one day you'll be!!" << endl;
    }
    else
    {
        cout << "you're a teenager, enjoy your youth!!" << endl;
    }
    return 0;
}