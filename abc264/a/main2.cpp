#include <bits/stdc++.h>
using namespace std;

int L, R;

int main() {
  cin >> L >> R;
  string S = "atcoder";
  cout << S.substr(L-1, R-L+1) << endl;
}
// 9/24 2:21