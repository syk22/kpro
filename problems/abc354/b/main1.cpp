#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, C, T = 0;
int ans = 0;

int main() {
  cin >> N;

  vector<string> S(N);
  REP (i, 0, N) cin >> S[i] >> C, T += C;
  
  ans = T % N;

  sort(ALL(S));

  cout << S[ans] << endl;
  
  return 0;
}

// 2024/9/19
// 13:56