#include <iostream>
using namespace std;

class SwapDemo
{
public:

    void swapUsingPointer(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void swapUsingReference(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    SwapDemo obj;

    int x = 10, y = 20;

    cout << "Before swapping: ";
    cout << "x = " << x << ", y = " << y << endl;

    obj.swapUsingPointer(&x, &y);

    cout << "After pointer swapping: ";
    cout << "x = " << x << ", y = " << y << endl;

    obj.swapUsingReference(x, y);

    cout << "After reference swapping: ";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}