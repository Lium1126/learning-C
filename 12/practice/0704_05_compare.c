//
//  0704_05_compare.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    
    printf("a b? ");
    scanf("%d %d", &a, &b);
    
    if(a > b){
        printf("大きい方の値は %dです。\n", a);
    }else{
        printf("大きい方の値は %dです。\n", b);
    }
    
    return(0);
}
