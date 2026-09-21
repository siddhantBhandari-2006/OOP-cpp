#include <iostream>
using namespace std;

class Marks
{
public:
    int score;

    Marks()
    {
        score = 0;
    }

    Marks(int s)
    {
        score = s;
    }

    Marks operator+(const Marks &obj)
    {
        Marks temp;

        temp.score = this->score + obj.score;

        return temp;
    }

    void display()
    {
        cout << "Score: " << score << endl;
    }
};

int main()
{
    Marks m1;
    Marks m2(80);
    Marks m3(60);

    Marks m4 = m2 + m3;

    m1.display();
    m4.display();

    return 0;
}
