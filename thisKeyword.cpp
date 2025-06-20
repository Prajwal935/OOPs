#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    Teacher(string name, string dept, string subject) // this keyword is a special pointer in C++ that points to the current object.
    {
        this->name = name;
        this->dept = dept;
        (*this).subject = subject;
    }
    void getinfo()
    {
        cout << "name : " << name << endl;
        cout << "dept : " << dept << endl;
        cout << "subject : " << subject << endl;
    }
};

int main()
{
    Teacher t1("prajwal", "ISE", "C++");
    t1.getinfo();
    return 0;
}