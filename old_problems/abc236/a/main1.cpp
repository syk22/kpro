#include <bits/stdc++.h>
using namespace std;

string S;
int a, b;

int main() {
  cin >> S >> a >> b; a--, b--;
  swap(S[a], S[b]);
  cout << S << endl;
}

// 9/6 2:57
// swapでいける！temp変数持っておかなくていい！