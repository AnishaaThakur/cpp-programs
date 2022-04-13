#include <iostream>
using namespace std;
int main()
{
    int n;
    float s = 0;
    cout << "Enter the no. of elements of array: ";
    cin >> n;
    float a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    float avg;
    avg = s / n;

    cout << "The sum of elements of array is: " << s << endl;
    cout << "The average of elements of array is: " << avg;

    return 0;
}