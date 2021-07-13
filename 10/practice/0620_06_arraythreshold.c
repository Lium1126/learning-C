//
//  0620_06_arraythreshold.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

#define THRESHOLD 170

int main(int argc, const char *argv[])
{
    int height[5] = {};
    int i;
    
    for(i = 0;i < 5;i++){
        printf("%d人目の身長? ", i + 1);
        scanf("%d", &height[i]);
    }
    
    for(i = 0;i < 5;i++){
        if(height[i] > THRESHOLD){
            printf("%d人目の身長 %d はしきい値を超えています\n", i + 1, height[i]);
        }
    }
    
    return(0);
}
