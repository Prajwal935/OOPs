#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // ifsteram ifs;//obj
  // ifs.open("my.text");
  ifstream ifs("my.txt");
  if (ifs)
    cout << "file is opened\n";
  else
    cout << "file is not opened\n";
  string str;
  int x;
  ifs >> str;
  ifs >> x;
  cout << str << " " << x << endl;
  ifs.close();
  return 0;
}