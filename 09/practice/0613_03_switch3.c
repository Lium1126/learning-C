//
//  0613_03_switch3.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    double x;
    int com;
    
    printf("x? ");
    scanf("%lf", &x);
    
    printf("---menu---\n");
    printf("1: 絶対値, 2: 二乗, 3: 三乗\n");
    printf("menu no? ");
    scanf("%d", &com);
    
    switch (com) {
        case 1:
            printf("|%f| = %f\n", x, fabs(x));
            break;
            
        case 2:
            printf("%f ^ 2 = %f\n", x, pow(x, 2.0));
            break;
            
        case 3:
            printf("%f ^ 3 = %f\n", x, pow(x, 3.0));
            break;
            
        default:
            fprintf(stderr, "not entry.\n");
            break;
            
    }
    
    return(0);
}
