//
//  0613_04_arraysum.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int sum = 0;
    int i;
    int a[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    for(i = 0;i < 10;i++){
        sum += a[i];
    }
    
    printf("11~20の合計 = %d\n" ,sum);
    
    return(0);
}
