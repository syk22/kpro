#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, M, A;
char B;
string res;

int main() {
  cin >> N >> M;

  vector<int> child(N);
  REP (i, 0, M) {
    res = "No";
    cin >> A >> B, --A;

    if (B == 'M'&& child[A] == 0) {
      res = "Yes";
      ++child[A];
    }

    cout << res << endl;
  }

  return 0;
}

// 2024/10/9
// 7:05