#include <iostream>
using namespace std;

class Book
{
public:
  string title;
  string author;
  int* rates;
  int ratescounter;
  Book(string Title, string Author)
  {
    title = Title;
    author = Author;
    ratescounter = 2;
    rates = new int[ratescounter];
    rates[0]=4;
    rates[1]=5;
    cout<<title+" constructor invoked\n";
  }
  ~Book(){//destructor start with tilda symbol
    delete []rates; 
    rates=nullptr;
    cout<<title+" destructor invoked\n";
  }
};

int main()
{
  Book b1("Millionaire Fastlane","M. J. DeMarco");
  Book b2("C++ Lambda Story","Bartek Filipek");
  Book b3(" Lambda Story","Bartek Filipek");
  Book b4=b2;

  return 0;
}