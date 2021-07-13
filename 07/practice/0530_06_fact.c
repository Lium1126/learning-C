//
//  0530_06_fact.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x, n;
    int i;
    int ans = 1;
    
    printf("x n? ");
    scanf("%d %d", &x, &n);
    
    for(i = 1;i <= n;i++){
        ans *= x;
    }
    
    printf("%d^%d = %d\n", x, n, ans);
    
    return(0);
}
