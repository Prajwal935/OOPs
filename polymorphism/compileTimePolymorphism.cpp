//examples of compile time polimorphism
//constructor overloading 
//function overloading 
//operator overloading

#include<iostream>
using namespace std;

class Print{
public:
    void show(int x){
        cout<<"int x= "<<x<<endl;
    }
    void show(char x){
        cout<<"char x= "<<x<<endl;
    }
};

int main(){
    Print ob;
    ob.show(5);
    ob.show('c');
    return 0;
}