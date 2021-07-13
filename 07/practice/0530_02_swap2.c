//
//  0530_02_swap2.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x, y;
    int temp;
    
    printf("x y? ");
    scanf("%d %d", &x, &y);
    
    if(x > y){
        temp = x;
        x = y;
        y = temp;
    }
    
    printf("x y = %d %d\n", x, y);
    
    return(0);
}
