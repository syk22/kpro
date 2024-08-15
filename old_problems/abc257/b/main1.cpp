#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;
  int A[K+1];
  int x;

  REP (i, 0, K) cin >> A[i];
  A[K+1] = N + 1;
  
  REP (i, 0, Q) {
    cin >> x;
    if (A[x] + 1 < A[x + 1]) A[x]++;
  }

  REP (i, 0, K) {
    cout << A[i];
    if (i < K) cout << " ";
    else cout << endl;
  }
}
// 9/12 16:39 + よくわからなくなったので解説参照


// int N, K, Q;
// string S;
// int X[100010];
// vi V = {};
// vs VS = {""};

// int main() {
//   cin >> N >> K >> Q;
//   int A[N], A2[K], L[Q];
//   // REP (i, 0, K) {
//   //   int x;
//   //   cin >> x, --x;
//   //   A[x] = 1;
//   // }
//   // FORE (x,A) cout << "A: " << x << endl;



//   REP (i, 0, Q) cin >> L[i], --L[i];
//   // FORE (x,L) cout << "L: " << x << endl;

//   REP (i, 0, Q) {

//   }
//   REP (i, 0, N) {
//     if (A[i] == 1) cout << i+1;
//     if (N - 1 - i) cout << " ";
//     else cout << endl;
//   }

//   // sort(ALL(V));
//   // auto it = find(ALL(VS), S);
//   // int i = distance(VS.begin(), it);
//   // cout << fixed << setprecision(10);
//   // cout << setw(4) << setfill('0') << N << endl;
//   // cout << S.substr(L-1, R-L+1) << endl;
// }


