#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string name,double cpg){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cpg;
    }
    Student(Student &obj){//deep copy
        this->name=obj.name;
        cgpaPtr=new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cpa  : "<<*cgpaPtr<<endl;
    }
};

int main()
{
    Student s1("prajwal",8);
    Student s2(s1);
    // s1.getInfo();
    *s2.cgpaPtr=8.18;
    s1.getInfo();
    s2.getInfo();
    return 0;
} 