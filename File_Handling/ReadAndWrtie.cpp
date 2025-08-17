#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
  string name;
  int roll;
  string branch;
  friend void operator<<(ofstream &ofs, Student s);
  friend void operator>>(ifstream &ifs, Student s);
};

void operator<<(ofstream &ofs, Student s)
{
  ofs << s.name << endl;
  ofs << s.roll << endl;
  ofs << s.branch << endl;
}

void operator>>(ifstream &ifs, Student s)
{
  ifs >> s.name;
  ifs >> s.roll;
  ifs >> s.branch;
}

int main()
{

  // writing a file
  Student s;
  s.name = "prjawal";
  s.roll = 123;
  s.branch = "ISE";
  // ofstream ofs("Student.txt");
  ofstream ofs;
  ofs.open("Student.txt");
  ofs << s; // storing object
  ofs.close();

  // reading a file
  ifstream ifs("student.txt");
  ifs >> s;
  ifs.close();

  cout << "name: " << s.name << endl;
  cout << "roll: " << s.roll << endl;
  cout << "branch: " << s.branch << endl;
  return 0;
}