#include <iostream>
using namespace std;

void fun(){
    int x=0;
    cout<<"x = "<<x<<endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    return 0;
}