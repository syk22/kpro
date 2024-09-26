#include <bits/stdc++.h>
using namespace std;

long long N;
string res = "Yes";

int main() {
  cin >> N;

  while (1) {
    if (N % 2 == 0) N /= 2;
    else if (N % 3 == 0) N /= 3;
    else if (N != 1) {
      res = "No";
      break;
    } else break;
  }

  cout << res << endl;

  return 0;
}

// 2024/9/26
// 4:42