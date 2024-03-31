// Decimal To Binary

#include <iostream>
#include <string>
#include <algorithm> // For reverse function
using namespace std;

string convertToBinary(int n)
{
  string res = "";
  while (n != 0)
  {
    if (n % 2 == 1)
      res += '1';
    else
      res += '0';
    n = n / 2;
  }
  reverse(res.begin(), res.end()); // Reverse the string
  return res;
}

int main()
{
  int n;
  cout << "Enter Number : ";
  cin >> n;

  string binary = convertToBinary(n);
  cout << "Binary Representation: " << binary << endl;

  return 0;
}
