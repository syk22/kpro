#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string S, taste;
string res = "Yes";

int main() {
  cin >> N >> taste;

  REP(i, 0, N - 2) {
    cin >> S;
    if (taste == "sweet" && taste == S) res = "No";
    else taste = S;
  }
  cout << res << endl;
  
  return 0;
}

// 2024/8/27
// 4:42