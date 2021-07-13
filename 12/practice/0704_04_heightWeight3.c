//
//  0704_04_heightWeight3.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;
    int array[3][2];
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重? ", i + 1);
        scanf("%d %d", &array[i][0], &array[i][1]);
    }
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重は ", i + 1);
        for(j = 0;j < 2;j++){
            printf("%d ", array[i][j]);
        }
        printf("です\n");
    }
    
    return(0);
}
