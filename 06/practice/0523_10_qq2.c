//
//  0523_10_qq2.c
//  prg2019
//
//  Created by k19061kk on 2019/05/23.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;
    int n;
    
    printf("n? ");
    scanf("%d", &n);
    
    for(i = n;i < n + 3 && i <= 9;i++){
        for(j = 1;j <= 9;j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    
    return(0);
}
