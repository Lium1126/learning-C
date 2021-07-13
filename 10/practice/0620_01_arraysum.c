//
//  0620_01_arraysum.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[5] = {};
    int i;
    int sum = 0;
    
    for(i = 0;i < 5;i++){
        a[i] = (i + 1) * 2; // 偶数を代入
    }
    
    for(i = 0;i < 5;i++){
        printf("a[%d]:%d\n", i, a[i]);
        sum += a[i];
    }
    
    printf("合計=%d\n", sum);
    
    return(0);
}
