#include <iostream>

using namespace std;

int main()
{
    // Name Declaration.
    cout << "Hello! I am Sanjay from 8C.\n" << endl;

    // prompt
    int a,b,temp;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // before swap
    cout << "\n";
    cout << "Before swap a = " << a << " and b = " << b << "." << endl;

    // swapping
    temp = a;
    a = b;
    b = temp;

    // after swap
    cout << "\n";
    cout << "But, after swap a = " << a << " and b = " << b << "." << endl;

    return 0;
}
