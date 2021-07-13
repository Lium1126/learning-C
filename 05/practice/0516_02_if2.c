//
//  0516_02_if2.c
//  prg2019
//
//  Created by k19061kk on 2019/05/16.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);
    
    if(a == b){
        printf("aとbの値は等しいです\n");
    }
    
    printf("計算終了\n");
    
    return(0);
}
