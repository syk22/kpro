#include <bits/stdc++.h>
using namespace std;

int R, G, B;
string C;

int main() {
  cin >> R >> G >> B >> C;

  if (C == "Red") cout << min(G, B) << endl;
  if (C == "Green") cout << min(R, B) << endl;
  if (C == "Blue") cout << min(R, G) << endl;
 
  return 0;
}

// 2024/9/12
// 3:33