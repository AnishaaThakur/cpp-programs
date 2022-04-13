#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int s = a + b;
    return s;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << addition(a, b) << endl;
    return 0;
}