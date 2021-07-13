//
//  0620_07_arraycomplex.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

#define SHRESHOLD 23.0

int main(int argc, const char *argv[])
{
    int height[5] = {};
    int weight[5] = {};
    int i;
    double height_meter;
    double standard_weight;
    double bmi[5] = {};
    
    for(i = 0;i < 5;i++){
        printf("%d人目の身長と体重? ", i + 1);
        scanf("%d %d", &height[i], &weight[i]);
    }
    
    for(i = 0;i < 5;i++){
        height_meter = (double)height[i] / 100.0;
        bmi[i] = (double)weight[i] / (height_meter * height_meter);
    }
    
    for(i = 0;i < 5;i++){
        if(bmi[i] > SHRESHOLD){
            printf("%d人目のBMI %f はしきい値を越えています\n", i + 1, bmi[i]);
            standard_weight = (double)(height[i] - 100) * 0.9;
            printf("標準体重との差は %f です\n", (double)weight[i] - standard_weight);
        }
    }
    
    return(0);
}
