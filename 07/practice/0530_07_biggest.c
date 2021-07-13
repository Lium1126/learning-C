//
//  0530_07_biggest.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n = 5; // 定数も変数で設定しておくことでデバッグが楽になる
    int input;
    int max;
    int i;
    
    for(i = 1;i <= n;i++){
        printf("%d? ", i);
        scanf("%d", &input);
        if(i == 1){
            max = input;
        }else if(max < input){
            max = input;
        }
    }
    
    printf("max = %d\n", max);
    
    return(0);
}
