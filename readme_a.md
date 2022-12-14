# A問題
目標：3分以内

## 間違いやすいところ
- 位置の問題  
わからなくなりがちだが、A問題ではそこまで難しい実装はないので、シンプルな条件を探っていく
- 整数問題が意外と引っかかってる
数え上げるのが苦手なのがわかってきた  
最初は面倒でも１行ずつ何をしているか確認する
- 読み間違い
問題文をよく読めていない可能性がある
ややこしいと思った時ほど丁寧に読み、紙に書き写すこと

## 第２回A問題マラソン
9/23　239-249 11問  
9/24　250-259 10問, 260-269 10問, 230-238 9問

### 3分切れない問題(5分以上)
239-249 8/11 (3/8)  
250-259 4/10  
260-269 4/10  
230-238 4/9  

*付きは5分以上かかっている問題

####　double, llをint / vectorをarrayでやってた
242*,  
253,

#### 使用するメソッドがわからなかった
239*（平方根）, 241*（配列）,  
257*（小数点切り上げの計算式）, 268（set),  
233（同257）, 237（ビット演算時のllは右辺にも必要）

#### 問題解読・単純に書くべきコードが長い
240, 243, 246, 249*,  
250, 259*, 267, 234*,  

#### エッジケースの想定に悩む
245*, (249*),  
261, (262), 263,

#### その他（ヒューマンエラー的なもの）
239*, 


## 初回A問題マラソン
212以降のA問題

### 1週目5分以上かかった問題
213, 216, 217,  
227, 228,  
238,  
241, 242, 243, 246, 247, 249,  
250, 251, 255, 257, 258, 259,  
260, 261, 262, 263, 264, 265, 267, 268,  
271, 

計27問/全61問中

### １週目5分未満だが3分切れなかった問題
212, 215, 219,  
220, 221, 223, 224, 225, 226, 229,  
230, 233, 234, 235, 237, 239,  
240, 245, 248,  
253, 254, 256,  
270,

計22問/対象34問中

## 使用するアルゴリズムなど

## わかっていなかったところ

### 244
```
string S;
S.back(); -> 最後の文字
S.front(); -> 最初の文字
```

### 245
時間と分など単位が混ざる場合は小さい方に合わせてしまってから比較  
算数の基本です

### 246
排他的論理和を使うと簡単にいく、というのはわかった  
```
1 xor 1 xor 1 = 1
1 xor 1 xor 0 = 0
1 xor 0 xor 0 = 1
```
３つの数を比較する場合、1のビットが偶数あれば0  
奇数あれば1なので、ビット演算を使うことが可能になる
（これは難しい）

### 237
ビット演算を使うと簡単に2の冪乗を求められる  
ただし、llは右辺にも使うこと
```
ll m = (ll) 1 << 31;
// => 2^32
if (-m <= N && N < m) {func();}
```
`-1 * (2^32) + 1 ~ 1 * (2^32) -1` がintの範囲  
=> -2147483648 ~ 2147483648  
`1 << 31` はintではオーバーフローする



### 217
文字列二つを比較すると、辞書比較となる  
簡単に比較ができるので楽

### 232
読み込む文字列が定まっている場合、  
読み込む文字列の分だけchar型を作り、一つずつ読み込むこともできる

### 233
aをbで割って小数点を切り上げたい（割り切れる場合も含めて）の場合  
`(a+b-1) / b` とする

### 235
文字列で読み込んだ後、文字列を配列として見る  
-> 配列の文字列は、charの集合として扱う  
-> charとして取り出したものはint型（＝ASCIIコード）として扱える  
`total += N[0] - '0'` で数字を取り出せる

### 242
計算前はintでも確率など、floatで出したいときは最初からfloatで入力すること

### 247
答えというより、文字列の使い方として
```
string T(3, 0);
T[0] = '0';
T[1] = '1';
T[2] = '2';
====> T == "012"
```
となるのは覚えること

### 248
`int(char型)` だと、ASCII文字のコード数になってしまう  
0 -> 48  
A -> 65  
a -> 97  
覚えておいていいかも？

### 249
動作中と休み中の秒数を足した数で割る→余りが動作中より小さければ動作中とみなす  
０からカウントしておき、割り切れる場合（あまりがないので０になる）も勘案すること

### 250
位置の問題  
素直に上下左右それぞれが存在するか確認すればOK

### 251
whileの条件は常に変更する変数とすること  
無限ループになっちゃうよ

### 253
sortの使い方を覚える  
sortはvectorで使うと覚えておく
sort(x.begin(), x.end()); -> sort(ALL(x));

### 254
後ろX文字系は0の時、埋める必要がある  
`setw(2) << setfill('0')` もありだが、文字列で処理すべき

### 267
`auto it = find(ALL(week), S);`  
`int i = distance(week.begin(), it);`  
こうしてやらないとインデックス値が取得できないのはC++本当面倒

### 265
演算子の優先順位  
`()` `++` `--` 
`*` `/` `%`
`+` `-`
上の方が優先される。優先順位が同じ場合は左から計算されるので、`()`などを利用し明示的に優先順位を作成すること

### 264
`S.substr(X-1, Y-X+1)` 　
`substr` の第１引数は開始位置、０から始まるのでX番目であればX-1  
第２引数は文字数、Y番目ならY-X+1, Z個ならZ

### 261
共通箇所を探すだけなので、まずどちらが先に来るのかを固定したい  
L1, L2を比べ、L2のが後に来た場合はswapで入れ替え、L1のが先に始まるようにする  
そのあとはifで条件分け  
条件分けをきちんとやれば正解

### 259
数え上げの問題  
ある地点までは成長しそこから止まるので  
->ある地点未満を知りたい場合は知りたい地点まで  
->ある地点以降を知りたい場合はある地点まで  
これらを計算するだけでよい