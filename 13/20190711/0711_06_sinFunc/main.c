//
//  main.c
//  0711_06_sinFunc
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double reg2Rad(double theta);

int main(int argc, const char * argv[]) {
    double theta;
    double rad;
    
    printf("input: ");
    scanf("%lf", &theta);
    
    rad = reg2Rad(theta);
    
    printf("sin (%f) = %f\n", theta, sin(rad));
    
    return 0;
}

double reg2Rad(double theta){
    return((theta / 180.0) * M_PI);
}
