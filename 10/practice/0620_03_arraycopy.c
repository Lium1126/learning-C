//
//  0620_03_arraycopy.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int height[5];
    double height_copy[5];
    int i;
    
    for(i = 0;i < 5;i++){
        printf("%d人目の身長(cm)? ", i + 1);
        scanf("%d", &height[i]);
    }
    
    for(i = 0;i < 5;i++){
        height_copy[i] = (double)height[i] / 100.0;
    }
    
    for(i = 0;i < 5;i++){
        printf("%d人目の身長は %f (m)です\n", i + 1, height_copy[i]);
    }
    
    return(0);
}
