#include <iostream>
using namespace std;

void sum(int &a, int &b)
{
    int c = a + b;
    cout << "Sum of " << a << " and " << b << " is :" << c << endl;
    cout << ++b << endl;
}

void passByValue(int a, int b)
{
    cout << "increment the b copy passed by main : " << ++b << endl;
    return;
}

void passByReference(int &a, int &b)
{
    cout << "increment the b reference passed by main : " << ++b << endl;
    return;
}

int main()
{
    int number, number2;
    cin >> number >> number2;
    sum(number, number2);
    passByValue(number, number2);
    cout << "Value of b after passByValue in main : " << number2 << endl;
    passByReference(number, number2);   
    cout << "Value of b after passByReference in main : " << number2 << endl;
    return 0;
}