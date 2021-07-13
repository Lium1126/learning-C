//
//  0613_06_reverse.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

#include <stdio.h>


int main(int argc, const char *argv[])
{
    int a[5];
    int i;
    
    for(i = 0;i <= 4;i++){
        printf("input %d: ", i);
        scanf("%d", &a[i]);
    }
    
    for(i = 4;i >= 0;i--){
        printf("%d: %d\n", i, a[i]);
    }
    
    return(0);
}
