#include <iostream>
using namespace std;
class b{
    public:
    int prn;

    b(int x){
        prn = x;
        cout<<"constructor called"<<endl;
    }
    void display(){
        cout<<"prn: "<<prn<<endl;
    }
};
int main(){
    b Aman(112);
    Aman.display();
}