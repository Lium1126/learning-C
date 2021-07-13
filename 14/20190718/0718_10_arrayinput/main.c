//
//  main.c
//  0718_10_arrayinput
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define PEOPLE_NUM (5)

int main(int argc, const char * argv[]) {
    double height[PEOPLE_NUM];
    double sum = 0.0;
    int i;
    
    for(i = 0;i < PEOPLE_NUM;i++){
        printf("%d人目の身長? ", i + 1);
        scanf("%lf", &height[i]);
    }
    
    for(i = 0;i < PEOPLE_NUM;i++){
        sum += height[i];
    }
    
    printf("平均身長= %f\n", sum / (double)PEOPLE_NUM);
    
    return 0;
}
