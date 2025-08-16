#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
  T *stk;
  int top;
  int size;

public:
  Stack(int size)
  {
    top = -1;
    stk = new T[size];
    this->size = size;
  }
  void push(T x);
  T pop();
};

template <class T>
void Stack<T>::push(T x)
{
  if (top == size - 1)
    cout << "stack is full" << endl;
  else
  {
    stk[++top] = x;
  }
}

template <class T>
T Stack<T>::pop()
{
  T x = 0;
  if (top == -1)
  {
    cout << "stack is empty" << endl;
    return -1;
  }
  else
  {
    x = stk[top--];
    return x;
  }
}

int main()
{
  Stack<int> st(4);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(5);
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  cout << st.pop() << endl;

  Stack<double> st1(4);
  st1.push(2.4);
  st1.push(3.3);
  st1.push(4.6);
  st1.push(5.23);
  st1.push(5.6);
  cout << st1.pop() << endl;
  cout << st1.pop() << endl;
  cout << st1.pop() << endl;
  cout << st1.pop() << endl;
  cout << st1.pop() << endl;
  return 0;
}