#include <bits/stdc++.h>
using namespace std;

#define FORE(i, a) for (auto &i : a)
#define REPS(i, a, n, b) for (int i = (a); i < (n); i += (b))

string S;
string res = "Yes";

int main() {
  cin >> S;

  vector<int> a(26);

  if (S.size() % 2 != 0) res = "No";
  REPS (i, 1, S.size(), 2) {
    if (S[i] != S[i - 1]) res = "No";
    ++a[int(S[i] - 'a')];
  }
  FORE (x, a) if (x != 1 && x != 0) res = "No";
  
  cout << res << endl;

  return 0;
}

// 2024/11/24
// 16:06