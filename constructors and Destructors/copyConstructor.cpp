#include <iostream>
using namespace std;

class Book
{
public:
  string title;
  string author;
  float *rates;
  int ratescounter;

  Book(string Title, string Author)
  {
    title = Title;
    author = Author;
    ratescounter = 2;
    rates = new float[ratescounter];
    rates[0] = 4;
    rates[1] = 5;
    cout << title + " constructor invoked\n";
  }

  ~Book()
  { // destructor start with tilda symbol
    delete[] rates;
    rates = nullptr;
    cout << title + " destructor invoked\n";
  }

  Book(const Book &original)
  {
    title = original.title;
    author = original.author;
    rates = original.rates;
    ratescounter = original.ratescounter;

    rates = new float[ratescounter];
    for (int i = 0; i < ratescounter; i++)
    {
      rates[i] = original.rates[i];
    }
  }
};

void PrintBook(Book book){
  cout<<"title: "<<book.title<<endl;
  cout<<"author: "<<book.author<<endl;
  float sum=0;
  for (int i = 0; i < book.ratescounter; i++)
  {
    sum+=book.rates[i];
  }
  cout<<"avg rate: "<<sum/book.ratescounter<<endl;
}
int main()
{
  Book b1("Millionaire Fastlane", "M. J. DeMarco");
  Book b2("C++ Lambda Story", "Bartek Filipek");
  // Book b3(b1);
  // Book b3(b1) or Book b3=b1 both are same
  Book b3 = b1;
  PrintBook(b1);
  PrintBook(b2);
  PrintBook(b3);
  return 0;
}