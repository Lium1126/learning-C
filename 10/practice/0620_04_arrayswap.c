//
//  0620_04_arrayswap.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[5] = {1, 2, 3, 4, 5};
    int temp;
    int idx1, idx2;
    int i;
    
    printf("何番目を入れ替えますか(1~5)? ");
    scanf("%d %d", &idx1, &idx2);
    
    if((1 <= idx1 && idx1 <= 5) && (1 <= idx2 && idx2 <= 5)){
        temp = a[idx1 - 1];
        a[idx1 - 1] = a[idx2 - 1];
        a[idx2 - 1] = temp;
        
        for(i = 0;i < 5;i++){
            printf("a[%d]=%d\n", i, a[i]);
        }
    }else{
        printf("正しくありません\n");
    }
    
    return(0);
}
