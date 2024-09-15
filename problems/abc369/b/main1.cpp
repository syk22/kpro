#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, A;
int ans = 0;
vector<int> L = {}, R = {};
string S;

int main() {
  cin >> N;

  REP (i, 0, N) {
    cin >> A >> S;
    if (S == "L") L.push_back(A);
    if (S == "R") R.push_back(A);
  }

  REP (i, 1, L.size()) ans += abs(L[i] - L[i - 1]);
  REP (i, 1, R.size()) ans += abs(R[i] - R[i - 1]);
  
  cout << ans << endl;
  
  return 0;
}