#include <iostream>
using namespace std;
int main()
{
    cout << "SIZE of datatypes:" << endl;

    cout << "The size of integer is: " << sizeof(int) << endl;
    cout << "The size of float is:" << sizeof(float) << endl;
    cout << "The size of char is:" << sizeof(char) << endl;
    cout << "The size of double is" << sizeof(double) << endl;

    cout << "RANGE of datatypes:" << endl;

    cout << "The range of integer is:" << INT_MIN << " to " << INT_MAX << endl;
    cout << "The range of char is:" << CHAR_MIN << " to " << CHAR_MAX << endl;

    return 0;
}
