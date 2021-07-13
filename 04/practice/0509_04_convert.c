//
//  0509_04_convert.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int nx, ny;
    double dx, dy;
    
    printf("nx ny? ");
    scanf("%d %d", &nx, &ny);          // 2整数入力
    
    printf("nx / ny = %d\n", nx / ny);
    
    dx = (double)nx; //------------+
    dy = (double)ny; //------------+-----実数を整数変数に代入
    
    printf("dx / ny = %f\n", dx / ny);
    printf("nx / dy = %f\n", nx / dy);
    
    return(0);
}
