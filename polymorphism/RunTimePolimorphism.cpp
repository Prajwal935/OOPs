//function overriding 
//virtual function
#include<iostream>
using namespace std;

class Parent{
    public:
    // void show(){
    //     cout<<"parent class\n";
    // }
    virtual void show(){ //virtual function.
        cout<<"parent class\n";
    }
};
class Child{
    public:
    void show(){
        cout<<"child class\n";
    }
};

int main(){
    Child c1;
    c1.show();
    return 0;
}