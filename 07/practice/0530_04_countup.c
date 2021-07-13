//
//  0530_04_countup.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    int i;
    
    printf("n? ");
    scanf("%d", &n);
    
    for(i = 1;i <= n;i++){
        printf("%d\n", i);
    }
    
    return(0);
}
