#include <bits/stdc++.h>
using namespace std;

#define ALL(x) (x).begin(),(x).end()
using ll = long long;

int K;
string A, B;

int main() {
  cin >> K >> A >> B;
  reverse(ALL(A));
  reverse(ALL(B));
  ll a = 0, b = 0;
  int base;
  for (int i = 0; i < A.size(); i++) {
    base = pow(K, i);
    a += base * (int(A[i] - '0'));
  }
  for (int i = 0; i < B.size(); i++) {
    base = pow(K, i);
    b += base * (int(B[i] - '0'));
  }
   cout << a * b << endl;
}

// 9/25 17分弱で提出も失敗、20分かけてもわからないので確認
// あ、答えがオーバーフローするからllにしないといけないだけだった。。。悲しい
// 10^5桁までいくので、確かに普通にllにする必要があった。