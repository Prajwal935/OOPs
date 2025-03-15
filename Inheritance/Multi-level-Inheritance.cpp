#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class Student:public Person{
    public:
    string college;
    Student(string name,int age,string college):Person(name,age){
        this->college=college;
    }
    
};
class GradStudent:public Student{
    public:
        int id;
        GradStudent(string name,int age,string college,int id):Student(name,age,college){
            this->id=id;
        }
        void getInfo()
        {
            cout << "name : " << name << endl;
            cout << "age  : " << age << endl;
            cout << "college : " << college << endl;
            cout << "ID : " << id << endl;
        }
};

int main()
{
    GradStudent s1("prajwal",21,"BGS",83);
    s1.getInfo();
    return 0;
}