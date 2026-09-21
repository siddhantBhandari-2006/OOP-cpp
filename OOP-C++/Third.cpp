#include<iostream>
 using namespace std;
 class B

{ 
    int PRN;
    char Name [20];

public:
void get(); //function defined outside a class

void display();

};//incaptulation wraps the data members and member functions in a single unit 12

void B::get() 
{
    cout<<"Enter PRN: \n";
    cin>>PRN;

    cout<<"Enter Name: \n";
    cin>>Name;
 }

void B:: display()

{ 
    cout<<"\n PRN: "<<PRN;

    cout<<"\n Name: "<<Name;

}

 int main()
{

 B pranay;
 pranay.get();
 pranay.display();

 return 0;

}