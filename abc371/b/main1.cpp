#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M, A;
char B;

int main() {
  cin >> N >> M;

  vector<int> check(N);

  REP(i, 0, M) {
    cin >> A >> B;
    --A;
    if (B == 'F') cout << "No" << endl;
    else if (check[A] == 0) {
      cout << "Yes" << endl;
      check[A] = 1;
    } else cout << "No" << endl;
  }
  
  return 0;
}