//
//  0411_01_writeSquere.c
//  prg2019
//
//  Created by k19061kk on 2019/04/11.
//

/*--------------------
 練習問題
 5x5の"#"を用いた正方形を
 描画する
----------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j; // カウンタ変数
    
    // forを使わない方法
    printf("not use 'for'\n");
    printf("#####\n");
    printf("#####\n");
    printf("#####\n");
    printf("#####\n");
    printf("#####\n");
    
    // forを使う方法
    printf("\nuse 'for'\n");
    for(i = 0;i < 5;++i){
        for(j = 0;j < 5;++j){
            printf("#");
        }
        printf("\n");
    }
    
    return(0);
}
