#include <bits/stdc++.h>
using namespace std;

int A, B;
int ans = 0;

int main() {
  cin >> A >> B;

  ans += pow(A, B);
  ans += pow(B, A);

  cout << ans << endl;
  
  return 0;
;}

// 2024/8/19
// 1:53