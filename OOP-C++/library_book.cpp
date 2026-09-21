#include<iostream>
#include<string>
using namespace std;

class Book
{
	private:
		int bookId;
		string title;
		int price;
		static int count;

	public:
		Book(int bookId, string title, int price)
		{
			this->bookId = bookId;
			this->title = title;
			this->price = price;
			count++;
		}

		inline void display()
		{
			cout<<"Book ID: "<<bookId<<endl;
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
		}

		static void showCount()
		{
			cout<<"Total books: "<<count<<endl;
		}

		friend class Library;
};

int Book::count = 0;

class Library
{
	public:
		void showStatus(Book obj)
		{
			cout<<"Book Information"<<endl;

			if(obj.price >= 500)
				cout<<obj.title<<" is an expensive book."<<endl;
			else
				cout<<obj.title<<" is an affordable book."<<endl;
		}
};

int main()
{
	int n, bookId, price;
	string title;

	cout<<"Enter number of books: ";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<"\nEnter book details:"<<endl;

		cout<<"Book ID: ";
		cin>>bookId;

		cout<<"Title: ";
		cin>>title;

		cout<<"Price: ";
		cin>>price;

		Book b(bookId, title, price);

		cout<<"\nBook Details:"<<endl;
		b.display();

		Library l;
		l.showStatus(b);
	}

	Book::showCount();

	return 0;
}