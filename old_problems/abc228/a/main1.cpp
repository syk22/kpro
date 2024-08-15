#include <bits/stdc++.h>
using namespace std;

int S, T, X;

int main() {
  cin >> S >> T >> X;

  if (S < T) cout << (S <= X && X < T ? "Yes" : "No") << endl;
  else cout << (X < T || S <= X ? "Yes" : "No") << endl;
}

// 9/7 25:00　未解決
// 周りに子供たちがいる時間は無理だった。
// 間違ってはいないのに。。。
