//
//  0530_08_qq3.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;
    
    for(i = 1;i <= 9;i++){
        for(j = 1;j <= 9;j++){
            printf("%3d", i * j);
        }
        printf("\n");
    }
    
    return(0);
}
