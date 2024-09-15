#include <bits/stdc++.h>
using namespace std;

int M, D, y, m, d;

int main() {
  cin >> M >> D >> y >> m >> d;

  ++d;
  if(d > D) d -= D, m++;
  if(m > M) m -= M, y++;

  cout << y << " " << m << " " << d << endl;
  
  return 0;
}