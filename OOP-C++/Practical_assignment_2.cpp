#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    int price;

public:

    Book()
    {
        title = "No Title";
        price = 0;
        cout << "Default Constructor Called" << endl;
    }

    Book(string t, int p)
    {
        title = t;
        price = p;
        cout << "Parameterized Constructor Called" << endl;
    }

    Book(Book &b)
    {
        title = b.title;
        price = b.price;
        cout << "Copy Constructor Called" << endl;
    }

    
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    
    Book b1;
    cout << "\nBook 1 Details:" << endl;
    b1.display();

    
    Book b2("C++ Programming", 500);
    cout << "\nBook 2 Details:" << endl;
    b2.display();

    
    Book b3(b2);
    cout << "\nBook 3 Details:" << endl;
    b3.display();

    return 0;
}





