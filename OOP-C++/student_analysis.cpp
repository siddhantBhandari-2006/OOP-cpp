#include<iostream>
using namespace std;
class Student
{
	private:
		int rollNo;
		string name;
		int marks;
		static int count;
	public:
		Student(int rollNo, string name, int marks)
		{
			this->rollNo=rollNo;
			this->name=name;
			this->marks=marks;
			count++;
		}
		inline void display()
		{
			cout<<"RollNo: "<<rollNo<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
		static void showCount()
		{
			cout<<"Total students: "<<count<<endl;
		}
		friend class Result;
};
int Student::count=0;
class Result
{
	public:
		void showResult(Student obj)
		{
			cout<<"Result Information"<<endl;
			if(obj.marks>=40)
			{
				cout<<obj.name<<" has passed."<<endl;
			}
			else
			{
				cout<<obj.name<<" has failed."<<endl;
			}
		}
};
int main()
{
	Student s1(101,"abc",70);
	Student s2(102,"xyz",30);
	cout<<"Student s1:"<<endl;
	s1.display();
	cout<<"Student s2:"<<endl;
	s2.display();
	Student::showCount();
	Result r;
	r.showResult(s1);
	r.showResult(s2);
	return 0;
}