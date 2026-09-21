#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    string role;
    float salary;
    string department;

   
    Employee(int id, string n, string r, float s, string d)
    {
        empId = id;
        name = n;
        role = r;
        salary = s;
        department = d;
    }

    
    void printDetails()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID : " << empId << endl;
        cout << "Name        : " << name << endl;
        cout << "Role        : " << role << endl;
        cout << "Salary      : " << salary << endl;
        cout << "Department  : " << department << endl;
    }

    
    void increment(float percentage)
    {
        salary = salary + (salary * percentage / 100);
        role = "Senior " + role;
    }
};

int main()
{
    int empId;
    string name, role, department;
    float salary;
    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "Enter Name: ";
    cin>> name;
    cout << "Enter Role: ";
    cin >> role;
    cout << "Enter Salary: ";
    cin >> salary;
    cout << "Enter Department: ";
    cin >> department;

    Employee emp(empId , name , role , salary , department);

    emp.printDetails();

    float percentage;

    cout << "\nEnter increment percentage: ";
    cin >> percentage;

    emp.increment(percentage);

    cout << "\nAfter Increment:";
    emp.printDetails();

    return 0;
}