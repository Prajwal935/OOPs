#include<iostream>
using namespace std;

class Instrument{
public:
  virtual void makeSound(){//it says if there is implimentation of this function in my derived class plz that then if there is no implimentation in my derived class then you can execute this function here.
    cout<<"Instrument is playing....\n";
  }
};

class Accordion:public Instrument{
public:
  void makeSound()
  {
    cout << "Accordiaon is playing....\n";
  }
};

int main(){
  Instrument *i1=new Accordion();//The object has both base and derived members, but the pointer i1 can only access base class members unless functions are virtual."
  i1->makeSound();
  return 0;
}