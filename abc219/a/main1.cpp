#include <bits/stdc++.h>
using namespace std;

int X;

int main() {
  cin >> X;
  if (X >= 90) cout << "expert" << endl;
  else if (X >= 70) cout << 90 - X << endl;
  else if (X >= 40) cout << 70 -X << endl;
  else cout << 40 - X << endl;
}

// 9/9 3:04