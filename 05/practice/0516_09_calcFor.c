//
//  0516_09_calcFor.c
//  prg2019
//
//  Created by k19061kk on 2019/05/16.
//

/*1~10までの和を求める*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int sum = 0; // 合計を保存する変数
    int i;       // カウンタ変数
    
    for(i = 1;i <= 10;i++){
        sum += i;
    }
    
    printf("1~10までの和:%d\n", sum);
    
    return(0);
}
