#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int B, G;
string result = "Bat";

int main() {
  cin >> B >> G;
  if (B < G) result = "Glove";

  cout << result << endl;
  
  return 0;
}

// 2024/8/23
// 1:48