# C++ データ型

よくわからないものをここにまとめていく

## set

重複した値を削除するのに便利

```
set<int> si;
si.insert(x);
```

## pair

二つで一つのものを表す  
make_pair()でpair型を作る必要がある。2列しかないvectorを作ってしまう方が楽かもしれない

```
pair<int, string> pair_return() {
    return {1, "aaa"};
}
int main() {
    auto[a, b] = pair_return();
    // a, bにそれぞれ代入されている
}
```
```
pair<int, int> pii;
pii = (make_pair(1, 0));
pii.first; // => 1
pii.second; // => 0
get<0>(pii); // => 1

// こんな書き出し方もある
string S;
int N;
tie(N, S) = pis;　// N = 0, S = "str"
```
