#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f, x;

int main2() {
  cin >> a >> b >> c >> d >> e >> f >> x;
  int ans_t = 0;
  int ans_a = 0;

  int time = x;
  while (time > 0) {
    if (time > a) {
      ans_t += a * b;
      time -= a;
    } else {
      ans_t += time * b;
    }
    time -= c;
  }
  time = x;
  while (time > 0) {
    if (time > d) {
      ans_a += d * e;
      time -= d;
    } else {
      ans_a += time * e;
    }
    time -= f;
  }
  string ans = "Draw";
  if (ans_t > ans_a) ans = "Takahashi";
  if (ans_t < ans_a) ans = "Aoki";
  cout << ans << endl;
  return 0;
}
// 9/23　8:13

int main() {
  cin >> a >> b >> c >> d >> e >> f >> x;
  int ans_t = x / (a + c) * a;
  int ans_a = x / (d + f) * d;
  int mod_t = x % (a + c);
  int mod_a = x % (d + f);

  ans_t += min(a, mod_t);
  ans_a += min(d, mod_a);

  string ans = "Draw";
  if (ans_t * b > ans_a * e) ans = "Takahashi";
  if (ans_t * b < ans_a * e) ans = "Aoki";
  cout << ans << endl;   
}
// 9/23 7:40ほど
// こっちの解き方の方がスッキリしてて良い