//
//  0627_09_heightWeight3.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int heightWeight[3][2];
    int i, j;
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重? ", i);
        scanf("%d %d", &heightWeight[i][0], &heightWeight[i][1]);
    }
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重は ", i + 1);
        for(j = 0;j < 2;j++){
            printf("%d ", heightWeight[i][j]);
        }
        printf("です\n");
    }
    
    
    
    return(0);
}
