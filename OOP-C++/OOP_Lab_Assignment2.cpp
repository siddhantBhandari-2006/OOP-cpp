#include <iostream>
using namespace std;

class dynamic
{
    int rollno;
    float marks;
    int addyear;

public:

    dynamic()
    {
        rollno = 111;
        marks = 80;
        addyear = 2020;
        cout << "Default Constructor" << endl;
    }

    dynamic(int r, float m, int a)
    {
        rollno = r;
        marks = m;
        addyear = a;
        cout << "Parameterized Constructor" << endl;
    }

    dynamic(const dynamic &obj)
    {
        rollno = obj.rollno;
        marks = obj.marks;
        addyear = obj.addyear;
        cout << "Copy Constructor" << endl;
    }

    void display()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Marks: " << marks << endl;
        cout << "Admission Year: " << addyear << endl;
    }
};

int main()
{
    cout << "stud1 as Default Constructor" << endl;

    dynamic stud1;
    stud1.display();

    cout << endl;

    cout << "stud2 as Parameterized Constructor" << endl;

    dynamic stud2(200, 90.00, 2021);
    stud2.display();

    cout << endl;

    cout << "stud3 as Copy Constructor" << endl;

    dynamic stud3 = stud2;
    stud3.display();

    return 0;
}
