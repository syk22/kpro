#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, A, calc;
string res = "Yes";

int main() {
  cin >> N >> A;
  calc = N % 500;

  if (calc > A) res = "No";

  cout << res << endl;
  
  return 0;
}
