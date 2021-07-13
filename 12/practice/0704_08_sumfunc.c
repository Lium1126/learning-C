//
//  0704_08_sumfunc.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int sumfunc(int n);

int main(int argc, const char *argv[])
{
    int n;
    int sum;
    
    printf("n? ");
    scanf("%d", &n);
    
    sum = sumfunc(n);
    printf("1から%dまでの和は %dです。\n", n, sum);
    
    return(0);
}

int sumfunc(int n)
{
    int i;
    int sum = 0;
    
    for(i = 1;i <= n;i++){
        sum += i;
    }
    
    return(sum);
}

/*
int sumfunc(int n){
    if(n == 1){
        return(1);
    }
    return(sumfunc(n - 1) + n);
}
*/
