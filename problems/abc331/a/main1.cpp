#include <bits/stdc++.h>
using namespace std;

int M, D, y, m, d;

int main() {
  cin >> M >> D >> y >> m >> d;
  d++;

  if (d > D) {
    d = 1;
    m++;
  }

  if (m > M) {
    m = 1;
    y++;
  }

  cout << y << " " << m << " " << d << endl;
  
  return 0;
}