#include<iostream>
using namespace std;

template<class T>

T add(T x,T y){
  return x+y;
}

int main(){
  cout<<add(3,45)<<endl;//add(3.5,6) ->not work
  cout<<add(3.4,5.2);
  return 0;
}