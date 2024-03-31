// Swap Two Numbers Without Using Third Varriable

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter First Number: " << endl;
  cin >> a;
  cout << "Enter Second Number: " << endl;
  cin >> b;
  cout << "\nBefore Swapping" << endl;
  cout << "First Value : " << a << endl;
  cout << "Second Value : " << b << endl;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  cout << "\nAfter Swapping" << endl;
  cout << "First Value : " << a << endl;
  cout << "Second Value : " << b << endl;
  return 0;
}