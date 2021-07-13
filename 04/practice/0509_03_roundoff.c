//
//  0509_03_roundoff.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

/*-------------------------+
 型変換練習プログラム
 実数を整数にして2で割ったものを
 表示する
 +-------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int nx;
    double dx;
    
    printf("dx? ");
    scanf("%lf", &dx);                 // 変換前の実数を入力
    
    printf("dx / 2 = %f\n", dx / 2.0); // 変換前の実数を2で割ったものを表示
    
    nx = (int)dx;                      // 実数を整数変数に代入
    
    printf("nx = %d\n", nx);           // 変換後の整数を表示
    printf("nx / 2 = %d\n", nx / 2);   // 整数の状態で2で割る
    
    return(0);
}
