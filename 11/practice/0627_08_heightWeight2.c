//
//  0627_08_heightWeight.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>
int main(int argc, const char *argv[])
{
    int heightWeight[3][2];
    int i;
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重? ", i + 1);
        scanf("%d %d", &heightWeight[i][0], &heightWeight[i][1]);
    }
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重は %d %d です\n", i, heightWeight[i][0], heightWeight[i][1]);
    }
    
    return(0);
}
