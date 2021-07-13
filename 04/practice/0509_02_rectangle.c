//
//  0509_02_rectangle.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    double height, wideth;
    
    printf("縦は？");
    scanf("%lf", &height);
    
    printf("横は？");
    scanf("%lf", &wideth);
    
    printf("長方形の面積は %f です\n", height * wideth);
    
    return(0);
}
