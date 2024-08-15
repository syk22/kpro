#include <bits/stdc++.h>
using namespace std;

string S;
int a, b;

int main() {
  cin >> S >> a >> b, --a, --b;
  swap (S[a], S[b]);
  cout << S << endl;
}
// 9:24 1:55