// Remove The Last Set Bit --> Rightmost

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Number : " << endl;
  cin >> n;

  int result = n & (n - 1); // Remove the rightmost set bit

  cout << "Number with the rightmost set bit removed: " << result << endl;

  return 0;
}
