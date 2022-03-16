#include <iostream>
using namespace std;
struct g1
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    g1 student;
    cout << "Enter the rollno.: " << endl;
    cin >> student.rollno;
    cout << "Enter the name:" << endl;
    cin.get(student.name, 50);
    cout << "Enter the marks :" << endl;
    cin >> student.marks;

    cout << "The information as filled is :" << endl;
    cout << "Rollno.:" << student.rollno << endl;
    cout << "Name:" << student.name << endl;
    cout << "Marks:" << student.marks << endl;
    return 0;
}
