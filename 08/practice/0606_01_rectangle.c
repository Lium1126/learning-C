//
//  0606_01_rectangle.c
//  prg2019
//
//  Created by k19061kk on 2019/06/06.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int h, w;
    int i, j;
    
    printf("h w? ");
    scanf("%d %d", &h, &w);
    
    for(i = 1;i <= h;i++){
        for(j = 1;j <= w;j++){
            putchar('#');
        }
        putchar('\n');
    }
    
    return(0);
}
