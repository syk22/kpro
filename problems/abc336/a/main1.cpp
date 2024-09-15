#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
string result = "L";

int main() {
  cin >> N;

  REP(i, 0, N) {
    result += "o";
  }

  result += "ng";

  cout << result << endl;
  
  return 0;
}

// 2024/8/23
// 2:21