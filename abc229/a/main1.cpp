#include <bits/stdc++.h>
using namespace std;

string S1, S2;

int main() {
  cin >> S1 >> S2;
  if ((S1 == "#." && S2 == ".#") || (S1 == ".#" && S2 == "#.")) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}

// 9/7 4:49
// 反例パターンを実装したのみ