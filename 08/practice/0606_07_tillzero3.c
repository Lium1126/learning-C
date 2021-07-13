//
//  0606_07_tillzero3.c
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
        
        if(x < 0){
            printf("無効です\n");
            continue;
        }else if(x == 0){
            printf("取引終了\n");
            break;
        }
        
        balance -= x;
        printf("残高: %d\n", balance);
    }
    
    return(0);
}
