#include <iostream>
using namespace std;
void fun(int);
int x = 20;
int main()
{
    int a = 10;
    fun(a);
    return 0;
}
void fun(int a)
{
    cout << a;
    cout<<x;
}