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
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Prajwal";
    t1.dept = "CSE";
    t1.subject = "C++";
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    t1.changeDept("ISE");
    cout << t1.dept << endl;
    t1.setSalary(50000);
    cout << t1.getSalary() << endl;
    return 0;
}