#include <bits/stdc++.h>
using namespace std;

// using ll = long long;

int A, B;

int main() {
  cin >> A >> B;
  if (A == B) cout << 1 << endl;
  else cout << (int)pow(32, A - B) << endl;
}

// 9/9 3:03
// intでも間に合う

