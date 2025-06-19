#include <iostream>
using namespace std;

//abstract class in cpp => a class that has at lest one pure virutal function 

class Instrument//this class became abstract class
{
public:
  virtual void makeSound() = 0;//pure virtual function
};

class Accordion : public Instrument
{
public:
  void makeSound()
  {
    cout << "Accordiaon is playing....\n";
  }
};

class Piano : public Instrument{
  void makeSound()
  {
    cout << "Piano is playing....\n";
  }
};
int main()
{
  Instrument *i1 = new Accordion(); //* i2 is a pointer of type Instrument (base class).* It points to an object of type Piano (derived class).

  i1->makeSound();
  Instrument *i2 = new Piano();
  i2->makeSound();
  Instrument *instrument[2]={i1,i2};

  for(int i=0;i<2;i++){
    instrument[i]->makeSound();
  }

  return 0;
}