#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept)
    {
        dept = newDept;
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
    return 0;
}