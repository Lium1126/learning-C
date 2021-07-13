//
//  0704_07_addfunc.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int addof(int x, int y);

int main(int argc, const char *argv[])
{
    int a, b;
    int ans;
    
    printf("a b? ");
    scanf("%d %d", &a, &b);
    
    ans = addof(a, b);
    printf("和は %dです。\n", ans);
    
    return(0);
}

int addof(int x, int y)
{
    return(x + y);
}
