//
//  0425_10_vector.c
//  prg2019
//
//  Created by k19061kk on 2019/04/24.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x, y;
    
    printf("(x,y)\? ");
    scanf("(%d,%d)", &x, &y);
    
    printf("(%d,%d)->(%d,%d)\n", x, y, x * 2, y * 2);
    
    return(0);
}
