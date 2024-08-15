#include <bits/stdc++.h>
using namespace std;

int X1, Y1, X2, Y2, X3, Y3, X4, Y4;

int main() {
  cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
  // if (X1 == X2) X4 = X3;
  // else if (X1 == X3) X4 = X2;
  // else X4 = X1;

  // if (Y1 == Y2) Y4 = Y3;
  // else if (Y1 == Y3) Y4 = Y2;
  // else Y4 = Y1;

  X4 = X1 ^ X2 ^ X3;
  Y4 = Y1 ^ Y2 ^ Y3;

  cout << X4 << " " << Y4 << endl;

}

// 9/6 5:21
// X1,って書くのが一番時間かかった
// y1って使えないんだってのが発見　y01にすれば良かったのかな
// 排他的論理和！すごい！けどどうしてこうなるのかよくわからない！