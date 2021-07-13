//
//  0523_04_calcFor.c
//  prg2019
//
//  Created by k19061kk on 2019/05/23.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int sum = 0;
    
    for(i = 1;i <= 10;i++){
        sum += i;
    }
    /*
     sum = sum + 1
     sum = sum + 2
     ...
     sum = sum + 10
     */
    
    printf("1~10の合計:%d\n", sum);
    
    return(0);
}
