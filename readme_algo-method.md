# アルゴ式で学んだこと

ここでは主にC++の関数について

## 最大値（最小値）を取得
forとmax関数を使わずとも配列の中の最大値を取得可能  
ただし返却値は `iterator` なので、そのまま値を取得したいときは `*` をつけて対応する

```
vector<int> A = {1, 2, 3, 4, 5};
int mx = *max_element(A.begin(), A.end());
// -> mx = 5;
```

最小値を取得したいときは `min_element`

## 最大値と最小値を同時に取得
pair型で帰ってくる。`p.first` が最小値、`p.second` が最大値

```
vector<int> A = {1, 2, 3, 4, 5};
pair<int, int> p = minmax(A);
// -> p = (1, 5);
```

## 特定要素の個数を求める
（やっぱりあったんだなこれ、、、、）

```
vector<int> A = {0, 1, 1, 2, 3, 4, 5, 5, 2, 1, 0};
int cnt = count(A.begin(), A.end(), 1);
// -> cnt = 3;
```

## 配列の長さを再設定

```
vector<int>A;

int main() {
  cin >> N;
  // AのサイズをNに設定、さらに初期値を-1とする
  A.reset(N , -1);
  return 0;
}
```