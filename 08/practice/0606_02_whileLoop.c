//
//  0606_02_whileLoop.c
//  prg2019
//
//  Created by k19061kk on 2019/06/06.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    
    printf("n? ");
    scanf("%d", &n);
    
    if(n >= 0){
        while(n >= 0){
            printf("%d\n", n);
            n--;
        }
    }
    
    return(0);
}
