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
class Marks : public Student
{
protected:
    int marks = 85;

public:
    void displayMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

// Derived class from Marks
class Result : public Marks
{
private:
    char grade = 'A';

public:
    void displayResult()
    {
        displayStudent();
        displayMarks();
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Result r;

    r.displayResult();

    return 0;
}