#include <iostream>
using namespace std;
class b{
    public:
    int prn;

    b(){
         
        cout<<"Default constructor called"<<endl;
    }
    void display(){
        cout<<"prn: "<<prn<<endl;
    }
};
int main(){
    b aman;
    
}