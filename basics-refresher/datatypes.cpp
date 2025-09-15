#include <iostream>
using namespace std;

int main()
{
    // // int - lon - long long
    int number1;
    long number2;
    long long number3;
    cout << "Enter a number: ";
    cin >> number1 >> number2 >> number3;
    cout << "You entered: " << number1 << endl;
    cout << "You also entered (long): " << number2 << endl;
    cout << "You also entered (long long): " << number3 << endl;

    // // float - double - long double
    float decimal1;
    double decimal2;
    long double decimal3;
    cout << "Enter a decimal number: ";
    cin >> decimal1 >> decimal2 >> decimal3;
    cout << "You entered: " << decimal1 << endl;
    cout << "You also entered (double): " << decimal2 << endl;
    cout << "You also entered (long double): " << decimal3 << endl;

    // string - getline - char
    string name;
    getline(cin, name);
    cout << "You entered name: " << name << endl;

    char ch;
    cin >> ch;
    cout << "You entered char: " << ch << endl;
    return 0;
}