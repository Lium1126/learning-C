//
//  main.c
//  0718_01_average
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define PEOPLE_NUM (3)

int main(int argc, const char * argv[]) {
    int height;
    double avg;
    int sum = 0;
    int i;
    
    for(i = 0;i < PEOPLE_NUM;i++){
        printf("%d人目の身長は? ", i + 1);
        scanf("%d", &height);
        sum += height;
    }
    
    avg = (double)sum / (double)PEOPLE_NUM;
    
    printf("平均身長は %f です\n", avg);
    
    return 0;
}
