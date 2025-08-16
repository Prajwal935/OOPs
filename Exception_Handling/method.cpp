#include<iostream>
using namespace std;

int division(int x,int y)throw(int){ //here throw(int) is optional 
  if(y==0)
    throw -1;
  return x/y;
}
int main(){
  int x=19,y=0,z;
  try{
    z=division(x,y);
    cout<<z<<endl;
  }catch(int e){
    cout<<"Division by zero "<<e;
  }
  return 0;
}