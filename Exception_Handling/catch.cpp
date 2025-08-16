#include<iostream>
using namespace std;

class MyException1:exception{

};
class MyException2:public MyException1{

};

int main(){
  int x=19,y=0,z;
  try{
      throw MyException1();
      // throw "d3ks93(&*)";
  }catch(int e){
    cout<<"int catch ";
  }catch(double e){
    cout<<"double catch";
  }catch(char e){
    cout<<"char catch";
  }catch(...){
    cout<<"all catch";
  }
  return 0;
}