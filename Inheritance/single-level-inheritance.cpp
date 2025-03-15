#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class Student : public Person
{
public:
    string college;
    Student(string name, int age, string college) : Person(name, age)
    {
        this->college = college;
    }
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age  : " << age << endl;
        cout << "college : " << college << endl;
    }
};

int main()
{
    Student s1("prajwal", 21, "BGS");
    s1.getInfo();
    return 0;
}