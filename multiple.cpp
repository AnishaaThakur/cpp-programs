#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n % 3 == 0 || n % 7 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "Multiple of 3";
        }
        else
        {
            cout << "Multiple of7";
        }
    }
    else
    {
        cout << "The entered number is not a multiple of 3 or 7";
    }

    return 0;
}