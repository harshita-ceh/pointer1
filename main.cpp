#include <iostream>
using namespace std;
int main() {
  int x=10;
  int *p,*q;
  p=&x;
  q=&x;
  std::cout << "p is "<<p<<endl;
  cout << "q is "<<q<<endl;
  cout << "p is "<<*p<<endl;
  cout << "q is "<<*q<<endl;
  cout << "x is "<<x<<endl;
  x=20;
  std::cout << "p is "<<p<<endl;
  cout << "q is "<<q<<endl;
  cout << "p is "<<*p<<endl;
  cout << "q is "<<*q<<endl;
  cout << "x is "<<x<<endl;
}