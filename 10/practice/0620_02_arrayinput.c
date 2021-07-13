//
//  0620_02_arrayinput.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int height[5] = {};
    int sum = 0;
    double average = 0;
    
    for(i = 0;i < 5;i++){
        printf("%d人目の身長? ", i + 1);
        scanf("%d", &height[i]);
    }
    
    for(i = 0;i < 5;i++){
        sum += height[i];
    }
    
    average = (double)sum / 5.0;
    printf("平均身長= %f\n", average);
    
    return(0);
}
