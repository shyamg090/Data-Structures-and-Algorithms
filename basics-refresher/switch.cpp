#include <iostream>
using namespace std;

int main()
{
    int name;
    cin >> name;

    switch (name)
    {
    case 1:
        cout << "Hello shyam" << endl;
        break;
    case 2:
        cout << "Hello ram" << endl;
        break;
    case 3:
        cout << "Hello hari" << endl;
        break;
    default:
        cout << "Hello user" << endl;
    }
}