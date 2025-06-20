#include <iostream>
using namespace std;

class ABC{
    public:
    ABC(){
        cout<<"Constructor\n";
    }
    ~ABC(){
        cout<<"Destructor\n";
    }
};
int main()
{
    if(true){
        static ABC ob;
    }
    cout<<"end of the main function\n";
    return 0;
}