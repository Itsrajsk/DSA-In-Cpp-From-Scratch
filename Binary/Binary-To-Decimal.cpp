// Binary To Decimal

#include <iostream>
#include <string>
using namespace std;

int convertToDecimal(string x)
{
  int len = x.length();
  int p2 = 1, num = 0;

  for (int i = len - 1; i >= 0; i--)
  {
    if (x[i] == '1')
    {
      num += p2;
    }
    p2 *= 2;
  }
  return num;
}

int main()
{
  string binary;
  cout << "Enter Binary Number: ";
  cin >> binary;

  int decimal = convertToDecimal(binary);
  cout << "Decimal Representation: " << decimal << endl;

  return 0;
}
