#include <bits/stdc++.h>
using namespace std;

int A, B, C;
string res = "Yes";

int main() {
  cin >> A >> B >> C;

  if (B < C && (B < A && A < C)) res = "No";
  if (C < B && (A < C || B < A)) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/9/12
// 4:38