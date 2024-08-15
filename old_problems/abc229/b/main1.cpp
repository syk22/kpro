#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

string A, B;

int main() {
  cin >> A >> B;
  int max_size = min(A.size(), B.size());
  int k = 0;
  reverse(ALL(A));
  reverse(ALL(B));
  bool ans = 0;
  REP (i, 0, max_size) {
    if (10 <= (A[i] - '0') + (B[i] - '0')) ans = 1;
  }
  
  cout << (ans ? "Hard" : "Easy") << endl;
}
// 10で割ったあまりで検証 -> 検証が終わったら10で割る
// この方が自然かも