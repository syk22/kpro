#include <bits/stdc++.h>
using namespace std;

int N, T, A;
string res = "Yes";

int main() {
  cin >> N >> T >> A;
  if ((N - 1) / 2 >= T && (N - 1) / 2 >= A) res = "No";

  cout << res << endl;
  
  return 0;
}

// 2024/8/27
// 2:48