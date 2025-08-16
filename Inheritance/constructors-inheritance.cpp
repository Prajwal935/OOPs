#include<iostream>
using namespace std;

class Base{
  public:
  Base(){
    cout<<"default of base class"<<endl;
  }
  Base(int x){
    cout<<"param of base class"<<endl<<x<<endl;
  }
};
class Derived : public Base{
  public:
  Derived (){
    cout<<"default of derived class"<<endl;
  }
  Derived(int x):Base(){//complier add default constructor of parent class if not given explicitly -> :Base()
    cout<<"param of derived class"<<endl<<x;
  }
  Derived(int x,int y):Base(x){
    cout<<"param of derived class "<<y<<endl;
  }
};
int main(){
  Derived d;
  Derived d1(5);
  // Derived d();  -> this will not work becase the complier treats as a function.
  // Derived d(); → function declaration (not object). like d function name default arguments and return type is derived.
  Derived d2(4,3);
  return 0;
}