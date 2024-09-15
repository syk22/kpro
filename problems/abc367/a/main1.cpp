#include <bits/stdc++.h>
using namespace std;

int A, B, C;
string res = "Yes";

int main() {
  cin >> A >> B >> C;

  if (C < B && (A < C || B < A)) res = "No";
  if (B < C && (B < A && A < C)) res = "No";
  
  cout << res << endl;
  
  return 0;
}

// 2024/8/27
// 15:13