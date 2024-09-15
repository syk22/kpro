#include <bits/stdc++.h>
using namespace std;

int A, B, D;

int main() {
  cin >> A >> B >> D;

  for (int i = A; i <= B; i += D) {
    cout << i;
    if (i < B) cout  << " ";
  }
  cout << endl;
  
  return 0;
}

// 2024/8/23
// 2:04