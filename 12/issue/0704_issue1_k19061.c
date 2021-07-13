//
//  0704_issue1_k19061.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

/*---------------------------------------+
 プログラミング及び演習I 第12回
 課題1
 整数nを読み込んで、nの階乗を計算するプログラムを
 自作関数を用いて作成せよ
 +---------------------------------------*/

#include <stdio.h>

int factfunc(int n);

int main(int argc, const char *argv[])
{
    int n;           // 入力値n
    int fact;        // nの階乗を格納する変数
    
    /*---入力---*/
    printf("n? ");
    scanf("%d", &n);
    
    /*---nの階乗を求める---*/
    fact = factfunc(n);
    
    /*---出力---*/
    if(fact < 1){
        printf("%dの階乗は定義されていません。\n", n);
    }else{
        printf("%dの階乗は %dです。\n", n, factfunc(n));
    }
    
    return(0);
}

/*-------------------------------+
 nの階乗を求める
 n=0を渡された際は1を返す
 nの階乗が定義されていない場合は-1を返す
 関数名 factfunc()
 引数 n:階乗を求める対象の整数
 返り値 nの階乗を整数型で返す
 +-------------------------------*/
int factfunc(int n)
{
    if(n < 0){
        return(-1);
    }else if(n <= 1){
        return(1);
    }
    return(factfunc(n - 1) * n);
}
