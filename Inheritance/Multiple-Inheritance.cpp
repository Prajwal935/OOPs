#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
};
class Teacher
{
public:
    string subject;
    double salary;
};
class TA : public Student, public Teacher{
    
};

int main()
{
    TA t1;
    t1.name = "prajju";
    t1.subject = "OOPs";
    cout << t1.name << endl;
    cout << t1.subject << endl;
    return 0;
}