#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, K, X;

int main() {
  cin >> N >> K >> X, K--;
 
  vector<int> A = {};
  REP (i, 0, N) {
    int a;
    cin >> a;
    A.push_back(a);
    if (i == K) A.push_back(X);
  }
  
  FORE (x, A) cout << x << " ";
  cout << endl;
 
  return 0;
}

// 2024/9/12
// 4:39