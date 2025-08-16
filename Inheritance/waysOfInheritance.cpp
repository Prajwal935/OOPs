#include<iostream>
using namespace std;

class Parent{
  private:   int a;
  protected: int b;
  public :   int c;

  void funParent(){
    a=10;
    b=5;
    c=15;
  }
};
class Child : protected Parent{
  public:
  // protected and public member became protected.
    void funChild(){
      // a=10;
      b=5;
      c=15;
    }
};
class GrandChild : private Child{
  public:
  //protected, public and private members are became private;
    void funChild(){
      // a=10;
      b=5;
      c=15;
    }
};
class GrandChild1 : public Child{
  //here can't access any members because all the members are private in the child class;
  public:
    void funChild(){
      // a=10;
      b=5;
      c=15;
    }
};

int main(){
  Child c;
  // c.a=10;
  // c.b=5;
  // c.c=20;
}