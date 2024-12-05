#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, A, B;
int cnt = 0, ans = 0;

int calc (int n) {
  int sum_digit = 0;
  while (n > 0) {
    sum_digit += n % 10;
    n /= 10;
  }
  return sum_digit;
}

int main() {
  cin >> N >> A >> B;
  
  REP (i, N + 1) {
    cnt = calc(i);
    if (A <= cnt && cnt <= B) ans += i;
  }

  cout << ans << endl;
  
  return 0;
}
