// Check If Ith Bit Is Set Or Not

#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cout << "Enter Numeber : " << endl;
  cin >> n;
  cout << "Enter i Value : " << endl;
  cin >> i;
  // Approach 1
  // if ((n & (1 << i) != 0))
  // {
  //   cout << "Bit Is Set" << endl;
  // }
  // else
  // {
  //   cout << "Bit Is Not Set" << endl;
  // }
  // Approach 2
  if ((n >> i) & 1 == 0)
  {
    cout << "Bit Is Not Set" << endl;
  }
  else
  {
    cout << "Bit Is Set" << endl;
  }
  return 0;
}