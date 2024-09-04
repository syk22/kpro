#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, K;

int main() {
  cin >> N >> K;

  vector<int> vi(N);
  REP (i, 0, N) cin >> vi[i];
  
  REP (i, 0, N) if (vi[i] % K == 0) cout << vi[i] / K << " ";
  
  cout << endl; 
  
  return 0;
}

// 2024/9/5
// 3:01