//
//  0530_05_countdown.c
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
    
    for(i = n;i >= 1;i--){
        printf("%d\n", i);
    }
    
    /*もしくは
     for(i = 1;i <= n;i++){
        printf("%d\n", n - i + 1);
     }
    */
    
    return(0);
}
