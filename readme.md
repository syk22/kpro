# Kpro

AtCoder・アルゴ式練習リポジトリ

AtCoder([AtCoder Problems](https://kenkoooo.com/atcoder/#/table/syk2020))

[アルゴ式](https://algo-method.com/tasks)

## 使い方

2 年ぶりにリポジトリ開いて全てを忘れ去っていたため記載

`acc new abc273 --template cpp` これで新しい問題を取得  
A 問題だけを選択して DL するなど可能

B 問題を追加する場合は `cd abc273` に移動後、 `acc add --template cpp` 実行  
B 問題を選択することで DL

`--template cpp` をつけないとテンプレート作ってくれないのでつけること

## test / atcoder cli

実行は上部の ▷ マークから `Run Code`

`a.out` がコンパイルしたファイル  
実行時は `./a.out`

~~`acc new abc216` これで新しいファイルを作っていける~~  
詳しくは[チュートリアルサイト](http://tatamo.81.la/blog/2018/12/07/atcoder-cli-tutorial/)で

~~カレントディレクトリを移動して `acc add` これで違うレベルの問題を追加できる~~

~~`acc add --template cpp` と引数をつけることでテンプレートが実行できるように修正済み~~

-> この辺、わかりにくかったので上に記載しなおし

`oj t` 該当フォルダにて実行すると、テストケースを走らせることが可能
→ 自前のテストケースも簡単に作れる

cd `acc config-dir`  
で、テンプレートファイル置き場へ  
`~/Library/Preferences/atcoder-cli-nodejs`

`acc config` で色々変更済み

```
oj-path: /usr/local/var/pyenv/shims/oj
default-contest-dirname-format: {ContestID}
default-task-dirname-format: {tasklabel}
default-test-dirname-format: test
default-task-choice: all
default-template:
```

atcoder-cli について詳細は下記参照  
https://github.com/Tatamo/atcoder-cli#provisioning-template

## 各 readme

[readme_func](readme_func.md)  
忘れがちな関数まとめ

[readme_a](readme_a.md)  
[readme_b](readme_b.md)  
A 問題 B 問題振り返り

最近はアルゴ式で DP とグラフ実装中
