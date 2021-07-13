//
//  0606_08_triangle.c
//  prg2019
//
//  Created by k19061kk on 2019/06/06.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    int i, j;
    
    printf("一辺の長さ? ");
    scanf("%d", &n);
    
    for(i = 1;i <= n;i++){
        for(j = 1;j <= i;j++){
            putchar('*');
        }
        putchar('\n');
    }
    
    return(0);
}
