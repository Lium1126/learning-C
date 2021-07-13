//
//  0523_03_loopNum.c
//  prg2019
//
//  Created by k19061kk on 2019/05/23.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i; // カウンタ変数
    int n; // ループ回数
    
    printf("n? ");
    scanf("%d", &n);
    
    for(i = 1;i <= n;i++){
        printf("Hello World\n");
    }
    
    return(0);
}
