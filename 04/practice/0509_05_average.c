//
//  0509_05_average.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int height1, height2, height3;
    double average;
    
    printf("No.1? ");
    scanf("%d", &height1);
    
    printf("No.2? ");
    scanf("%d", &height2);
    
    printf("No.3? ");
    scanf("%d", &height3);
    
    average = (double)(height1 + height2 + height3) / 3.0;
    
    printf("average = %f\n", average);
    
    return(0);
}
