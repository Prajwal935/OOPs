#include<iostream>
using namespace std;

int main(){
  int x=19,y=0,z;
  try{
    if(y==0)
      throw -1;
    z=x/y;
    cout<<z<<endl;
  }catch(int e){
    cout<<"Division by zero "<<e;
  }
  return 0;
}