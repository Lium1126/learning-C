//
//  0704_06_comparefunc.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int maxof(int x, int y);

int main(int argc, const char *argv[])
{
    int a, b;
    int max;
    
    printf("a b? ");
    scanf("%d %d", &a, &b);
    
    max = maxof(a, b);
    printf("大きい方の値は %dです。\n", max);
    
    return(0);
}

int maxof(int x, int y)
{
    int m;
    
    if(x > y){
        m = x;
    }else{
        m = y;
    }
    return(m);
}

/*
 int maxof(int x, int y)
 {
    if(x > y) return x;
    return y;
 }
 */
