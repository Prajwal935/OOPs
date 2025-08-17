#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream outfile("my.txt", ios::trunc);
  outfile << "prajwal" << endl;
  outfile << 123 << endl;
  outfile.close();
}