#include<iostream>
using namespace std;

template<class T, class R>

double add(T x,R y){
  return x+y;
}

int main(){
  cout<<add(3,4.2)<<endl;
  cout<<add(4,5.2);
  return 0;
}