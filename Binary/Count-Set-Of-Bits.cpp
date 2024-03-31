// Count Set Of Bits

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Number : " << endl;
  cin >> n;

  int cnt = 0;
  while (n != 0)
  {
    n = n & (n - 1);
    cnt++;
  }

  cout << "Count Of Bits : " << cnt << endl;
  return 0;
}
