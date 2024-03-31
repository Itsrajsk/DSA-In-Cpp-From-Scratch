// Check if the number is a power of 2

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Number : " << endl;
  cin >> n;

  if ((n & (n - 1)) == 0) // Corrected the operator precedence by adding parentheses around (n - 1)
  {
    cout << "Number Is Power Of Two" << endl;
  }
  else
  {
    cout << "Number Is Not Power Of Two" << endl;
  }
  return 0;
}
