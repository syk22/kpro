#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string res = "Yes";

map<string, int> msi = {
  {"tourist", 3858},
  {"ksun48", 3679},
  {"Benq", 3658},
  {"Um_nik", 3648},
  {"apiad", 3638},
  {"Stonefeang", 3630},
  {"ecnerwala", 3613},
  {"mnbvmar", 3555},
  {"newbiedmy", 3516},
  {"semiexp", 3481}
};

int main() {
  cin >> S;
  
  cout << msi.at(S) << endl;
  
  return 0;
}

// 2024/9/1
// 7:20