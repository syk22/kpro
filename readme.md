# Kpro

AtCoder・アルゴ式練習リポジトリ

AtCoder([AtCoder Problems](https://kenkoooo.com/atcoder/#/table/syk2020))

[アルゴ式](https://algo-method.com/tasks)

## 使い方

2 年ぶりにリポジトリ開いて全てを忘れ去っていたため記載

マラソンに向けてテンプレートファイル(main.cpp)ではなくて main1.cpp を使用している  
main2, main3... と増やしていく

提出するときは `acc submit main1.cpp` とコマンド  
この時、ディレクトリは問題のあるディレクトリにいること
submit 後の確認入力があるが、それさえきちんと入力できていれば提出できて、その後にブラウザで結果が確認できる

npm のスクリプトはイマイチ使い勝手が良くないため不使用

## test / atcoder cli

実行は上部の ▷ マークから `Run Code`

`a.out` がコンパイルしたファイル  
実行時は `./a.out`

`acc new abc273 --template ca` これで新しい問題を取得  
A 問題だけを選択して DL するなど可能

B 問題を追加する場合は `cd abc273` に移動後、 `acc add --template cb` 実行  
B 問題を選択することで DL

`--template ca` をつけないとテンプレート作ってくれないのでつけること  
`ca` は A 問題特化型（と言うかそんなに難しいの不要なのでけしている）

詳しくは[チュートリアルサイト](http://tatamo.81.la/blog/2018/12/07/atcoder-cli-tutorial/)で

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
