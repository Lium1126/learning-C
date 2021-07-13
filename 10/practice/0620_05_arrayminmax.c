//
//  0620_05_arrayminmax.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

int minNum(int a, int b); // 小さい方を返す
int maxNum(int a, int b); // 大きい方を返す

int main(int argc, const char *argv[])
{
    int min, max;
    int height[5] = {};
    int i;
    
    for(i = 0;i < 5;i++){
        printf("%d人目の身長? ", i + 1);
        scanf("%d", &height[i]);
    }
    
    min = max = height[0];
    for(i = 1;i < 5;i++){
        min = minNum(min, height[i]);
        max = maxNum(max, height[i]);
    }
    
    printf("最小身長は %d です\n", min);
    printf("最大身長は %d です\n", max);
    
    return(0);
}

// 小さい方を返す
int minNum(int a, int b){
    if(a < b){
        return(a);
    }else{
        return(b);
    }
}

// 大きい方を返す
int maxNum(int a, int b){
    if(a > b){
        return(a);
    }else{
        return(b);
    }
}
