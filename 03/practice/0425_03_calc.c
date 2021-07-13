//
//  0425_03_calc.c
//  prg2019
//
//  Created by k19061kk on 2019/04/24.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b, c, d, e;
    
    a = 3;
    b = 4;
    c = 2;
    d = 8;
    e = a + b * c / d;
    
    printf("%d + %d * %d / %d = %d\n", a, b, c, d, e);
    
    return(0);
}
