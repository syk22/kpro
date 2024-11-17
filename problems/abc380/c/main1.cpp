#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, K;
int cnt = 1, flag = 0;
string S;

int main() {
  cin >> N >> K >> S;

  vector<int> A;
  vector<char> tf;
  flag = S[0];

  REP (i, 1, N) {
    if (S[i] == flag) {
      ++cnt;
    } else {
      A.push_back(cnt);
      tf.push_back(flag);
      cnt = 1;
      flag = S[i];
    }
  }
  
  A.push_back(cnt);
  tf.push_back(flag);

  int ind;
  if (tf[0] == '0') ind = K * 2 - 1;
  else ind = K * 2 - 2;

  A[ind - 2] += A[ind];

  REP (i, 0, A.size()) {
    if (i == ind) continue;    
    REP (_, 0, A[i]) {
      cout << tf[i];
    }
  }
  cout << endl;
  return 0;
}

// 2024/11/17
// 34:48