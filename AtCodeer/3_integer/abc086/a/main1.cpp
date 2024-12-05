#include <bits/stdc++.h>
using namespace std;

int a, b;
string res = "Even";

int main() {
  cin >> a >> b;

  if (a % 2 == 1 && b % 2 == 1) res = "Odd";

  cout << res << endl;
  
  return 0;
}
