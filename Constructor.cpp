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
    Teacher() // non-paramitarized constructor
    {
        cout << "Hi, I'm constructor";
        dept = "computer sceince";
    }
    Teacher(string n, string d, string s) // paramitarized constructor
    {
        name = n;
        dept = d;
        subject = s;
    }
    Teacher(Teacher &orgObj)  //custom copy creator
    {
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
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
    Teacher t1;
    cout << endl<< t1.dept;
    Teacher t2("prajwal", "ISE", "C++");
    // t2.getinfo();
    //Teacher t3(t2); // default coopy constructor - invoke -just calling without custom constructor.
    Teacher t3(t2); //custom copy creator 
    t3.getinfo();
    return 0;
}