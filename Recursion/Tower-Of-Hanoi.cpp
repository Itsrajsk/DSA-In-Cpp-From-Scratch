// Tower of Hanoi Algorithm

#include <bits/stdc++.h>
using namespace std;
void toh(int n, char from_rod, char to_rod, char aux_rod)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // 2 , A , B , C
    toh(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move Disk " << n << " From Rod " << from_rod << " To Rod " << to_rod << endl;
    toh(n - 1, aux_rod, to_rod, from_rod);
}
int main()
{
    int n = 3;
    toh(n, 'A', 'C', 'B');
    return 0;
}