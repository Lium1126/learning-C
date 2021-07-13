//
//  0606_05_tillzero.c
//  prg2019
//
//  Created by k19061kk on 2019/06/06.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int balance = 1000;
    int x;
    
    while(balance > 0){
        printf("x? ");
        scanf("%d", &x);
        
        balance -= x;
        printf("残高: %d\n", balance);
    }
    
    return(0);
}
