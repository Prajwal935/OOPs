#include<iostream>
using namespace std;

class SmartPhone{
  public:
    virtual void takeASelfie()=0;
    // virtual void makeACall()=0;
};

class Android:public SmartPhone{
  public:
    void takeASelfie(){
      cout<<"Android selfie\n";
    }
};

class IPhone:public SmartPhone{
  public:
    void takeASelfie()
    {
      cout << "IPhone selfie\n";
    }
};

int main()
{
  SmartPhone *s1 = new Android();
  s1->takeASelfie();

  SmartPhone *s2=new IPhone();
  s2->takeASelfie();
  return 0;
}