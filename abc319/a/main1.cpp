#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string pl[10] = {"tourist", "ksun48", "Benq", "Um_nik", "apiad", "Stonefeang",  "ecnerwala", "mnbvmar", "newbiedmy", "semiexp"};
int X[10] = {3858, 3679, 3658, 3648, 3638, 3630, 3613, 3555, 3516, 3481};

int main() {
  cin >> S;

  REP (i, 0, 10) {
    if (S == pl[i]) cout << X[i] << endl;
  }

  return 0;
}

// 20247/8/18
// 5:26