//
//  0425_08_remainder.c
//  prg2019
//
//  Created by k19061kk on 2019/04/24.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    
    printf("a b\? ");
    scanf("%d %d", &a, &b);
    
    printf("%d / %d の余りは %d です\n", a, b, a % b);
    
    return(0);
}
