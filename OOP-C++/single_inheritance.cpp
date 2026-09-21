#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    string name = "Aman";
    int rollNo = 12;

public:
    void displayStudent()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class
class Result : public Student
{
private:
    int marks = 85;

public:
    void displayResult()
    {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.displayResult();

    return 0;
}