#include <bits/stdc++.h>
using namespace std;

int K, A, B, i = 0;
int ans = 0;
string res = "NG";

int main() {
  cin >> K >> A >> B;

  while (ans <= B) {
    ans = K * i;
    if (A <= ans && ans <= B) res = "OK";
    ++i;
  }

  cout << res << endl;
  
  return 0;
}
