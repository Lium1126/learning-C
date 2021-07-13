//
//  0613_05_arrayloop.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[100];
    int i;
    
    for(i = 0;i < 100;i++){
        a[i] = i;
    }
    
    for(i = 0;i < 100;i++){
        printf("a[%2d] = %2d\n", i, a[i]);
    }
    
    return(0);
}
