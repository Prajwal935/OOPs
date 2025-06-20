#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    string college;
};
class Teacher : public Person
{
public:
    int id;
};

int main()
{
    Teacher s1;
    Student s2;
    // set value and access
    return 0;
}