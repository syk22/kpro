#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0, flag = 0;
string S;

int main() {
  cin >> N >> S;

  vector<int> num;
  vector<char> C;

  for (int i = 0; i < N;) {
    char temp = S[i];
    C.push_back(temp);
    flag = i;
    while (S[i] == temp && i < N) {
      ++i;
    }
    num.push_back(i - flag);
  }

  REP (i, 1, C.size() - 1) {
    if (C[i] == '/' && C[i - 1] == '1' && C[i + 1] == '2') {
      ans = max(ans, min(num[i - 1], num[i + 1]));
    }
  }
  cout << ans * 2 + 1 << endl;

  return 0;
}

// 2024/11/24
// 16:41