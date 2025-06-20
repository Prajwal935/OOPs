#include <iostream>
using namespace std;

class Student
{ // abstract class means we cannot create instances this class.
public:
  string name;
  int age;
  char gender;

  virtual void study() = 0;
};

class ProgrammingStudent : public Student
{
public:
  void study()
  {
    cout <<"learning programming"<<endl;
  }
};

class ArtsStudent : public Student
{
  void study()
  {
    cout << " programming paint" << endl;
  }
};

class MusicStudent : public Student
{
  void study()
  {
    cout << "learning to play piano and to sing" << endl;
  }
};

int main()
{

  Student* students[3];
  students[0]=new ProgrammingStudent();
  students[1]=new ArtsStudent();
  students[2]=new MusicStudent();

  for(int i=0;i<=2;i++){
    students[i]->study();
  }
  for(int i=0;i<=2;i++){
    delete students[i];
  }

  return 0;
}