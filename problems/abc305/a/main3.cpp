#include <bits/stdc++.h>
using namespace std;

int N;
int ans = 0;

int main() {
  cin >> N;

  ans = N % 5 >= 3 ? N / 5 + 1 : N / 5;

  cout << ans * 5 << endl;
  
  return 0;
}

// 2024/9/14
// 2:28