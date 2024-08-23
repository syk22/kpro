#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int T = 0, A = 0, tt, at;
string result = "Draw";

int main() {
  cin >> N;

  REP(i, 0, N) {
    cin >> tt >> at;
    T += tt;
    A += at;
  }

  if (T > A) result = "Takahashi";
  else if (T < A) result = "Aoki";

  cout << result << endl;
  
  return 0;
}

// 2024/8/23
// 3:23