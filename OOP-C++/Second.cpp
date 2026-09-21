#include<iostream>

using namespace std;

class B

{
 int PRN;

char Name [20];

public:

void gate() //function defined inside a class

{
    cout<<"Enter PRN: \n"; 
    cin>>PRN;

    cout<<"Enter Name: \n"; 
    cin>>Name;

}

void display()


{ 
    cout<<"\n PRN: "<<PRN;

    cout<<"\n Name: "<<Name;

}

 };//incaptulation wraps the data members and member functions in a single unit

int main()
{
B Aman;
Aman.gate();
Aman.display();
return 0;
}