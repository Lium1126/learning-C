//
//  0704_03_heightWeight2.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int human[3][2];
    int i;
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重? ", i + 1);
        scanf("%d %d", &human[i][0], &human[i][1]);
    }
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重は %d %d です\n", i + 1, human[i][0], human[i][1]);
    }
    
    return(0);
}
