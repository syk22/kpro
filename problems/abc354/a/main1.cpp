#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll H, leaf, day = 0;

int main() {
  cin >> H;

  while (leaf <= H) {
    leaf += pow(2, day);
    day++;
  }
  cout << day << endl;
  
  return 0;
}

// 2024/8/26
// 11:38