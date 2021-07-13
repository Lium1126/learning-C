//
//  0704_02_heightWeight.c
//  prg2019
//
//  Created by k19061kk on 2019/07/01.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int human[3][2] = {
        {170, 80},
        {160, 50},
        {180, 70}
    };
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重は %d %d です\n", i + 1, human[i][0], human[i][1]);
    }

    return(0);
}
