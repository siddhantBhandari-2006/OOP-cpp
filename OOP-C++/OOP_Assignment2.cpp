#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    // Default constructor
    Student()
    {
        marks = 0;
    }

    // Parameterized constructor
    Student(int m)
    {
        marks = m;
    }

    // Copy constructor
    Student(const Student &s)
    {
        marks = s.marks;
    }

    void setMarks(int m)
    {
        marks = m;
    }

    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Object using default constructor
    Student student1;

    // Object using parameterized constructor
    Student student2(85);

    // Object using copy constructor
    Student student3(student2);

    // Updating marks of first object
    student1.setMarks(75);

    cout << "Student 1: ";
    student1.showMarks();

    cout << "Student 2: ";
    student2.showMarks();

    cout << "Student 3: ";
    student3.showMarks();

    return 0;
}
