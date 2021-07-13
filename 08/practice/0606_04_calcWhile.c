//
//  0606_04_calcWhile.c
//  prg2019
//
//  Created by k19061kk on 2019/06/06.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x = -1;
    int sum = 0;
    
    while(x != 0){
        printf("x? ");
        scanf("%d", &x);
        
        sum += x;
        printf("sum: %d\n", sum);
        
    }
    
    printf("end\n");
    
    return(0);
}
