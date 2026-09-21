#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private:
		int empId;
		string name;
		int salary;
		static int count;

	public:
		Employee(int empId, string name, int salary)
		{
			this->empId = empId;
			this->name = name;
			this->salary = salary;
			count++;
		}

		inline void display()
		{
			cout<<"Employee ID: "<<empId<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
		}

		static void showCount()
		{
			cout<<"Total employees: "<<count<<endl;
		}

		friend class Performance;
};

int Employee::count = 0;

class Performance
{
	public:
		void showPerformance(Employee obj)
		{
			cout<<"Performance Information"<<endl;

			if(obj.salary >= 30000)
				cout<<obj.name<<" has good performance."<<endl;
			else
				cout<<obj.name<<" needs improvement."<<endl;
		}
};

int main()
{
	int n, empId, salary;
	string name;

	cout<<"Enter number of employees: ";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<"\nEnter employee details:"<<endl;

		cout<<"Employee ID: ";
		cin>>empId;

		cout<<"Name: ";
		cin>>name;

		cout<<"Salary: ";
		cin>>salary;

		Employee e(empId, name, salary);

		cout<<"\nEmployee Details:"<<endl;
		e.display();

		Performance p;
		p.showPerformance(e);
	}

	Employee::showCount();

	return 0;
}