# プログラミング及び演習I ソースコード置き場

## ディレクトリ構造
### 第1回〜第12回
授業回数を表す数字のみ名前のディレクトリ(下図はnumにて代表)には、次のディレクトリが含まれています。

```
  num/
  ├ practice/
  |  └ some programs...
  ├ issue/
  |  └ some programs...
  └ challenge/
     └ some programs...
```

それぞれに含まれるプログラムは次の通りです。

  | ディレクトリ名 | 内容 |
  | --- | --- |
  | practice | 授業内演習 |
  | issue | 通常課題 |
  | challenge | チャレンジ課題(加点対象課題) |

### 第13回, 第14回
13/および14/には、次のディレクトリが含まれています。

```
  num/
  └ date/
     ├ project direcotry1/
     |  └ main.c
     ├ project directory2/
     |  └ main.c
     ...
```

### 最終課題
最終課題のプログラムが含まれるディレクトリ final_issue/ には次のファイルが含まれています。

| ファイル名 | 内容 |
| --- | --- |
| practice.c | 練習用プログラム(開発途中に作られた副産物) |
| k19061_0722_MineSweeperWithCurses2.c | 最終課題のプログラム |

詳しくは別リポジトリへ移行してあります -> [https://github.com/Lium1126/minesweeper-in-term](https://github.com/Lium1126/minesweeper-in-term)

## 実行方法
1. 次のコマンドで、実行したい .c ファイルが含まれているディレクトリに移動してください。
```
$ cd directoryname
```

2. 次のコマンドで .c ファイルをコンパイルし、生成した実行可能ファイルを実行します。
```
$ gcc filename.c && ./a.out
```

> **注意**: 最終課題のプログラムを実行する際は、以下のようにコンパイルオプションを付加してください。

```
$ gcc k19061_0722_MineSweeperWithCurses2.c -lcurses && ./a.out
```
