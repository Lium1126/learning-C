//
//  main.c
//  0711_05_sin
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double theta;
    double rad;
    
    printf("input: ");
    scanf("%lf", &theta);
    
    rad = (theta / 180.0) * M_PI;
    
    printf("sin (%f) = %f\n", theta, sin(rad));
    
    return 0;
}
