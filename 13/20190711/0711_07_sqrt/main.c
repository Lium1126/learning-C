//
//  main.c
//  0711_07_sqrt
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double x;
    
    printf("input: ");
    scanf("%lf", &x);
    
    printf("√%f = %f\n", x, sqrt(x));
    
    return 0;
}
