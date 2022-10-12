#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
  cin >> S;
  N = S.size() / 2;
  cout << S.substr(N, 1) << endl;
}

// 9/5 2:55
// 3分切ったの初めてだ
// 睡眠は重要