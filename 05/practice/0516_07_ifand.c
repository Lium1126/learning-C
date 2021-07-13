//
//  0516_07_ifand1.c
//  prg2019
//
//  Created by k19061kk on 2019/05/16.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    
    printf("a? ");
    scanf("%d", &a); // aの入力
    printf("b? ");
    scanf("%d", &b); // bの入力
    
    if(a > 0 && b > 0){ // 条件式の結合
        printf("aとbは正です\n");
    }else{
        printf("aとbのどちらかは負もしくは0です\n");
    }
    
    return(0);
}
