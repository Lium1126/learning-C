//
//  0425_07_rectangle.c
//  prg2019
//
//  Created by k19061kk on 2019/04/24.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int height, width;
    
    printf("a b\? ");
    scanf("%d %d", &height, &width);
    
    printf("周囲長:%d 面積:%d\n", 2 * height + 2 * width, height * width);
    
    return(0);
}
