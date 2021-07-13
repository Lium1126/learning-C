//
//  0627_07_heightWeight.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int heightWeight[3][2] = {
        {170, 80},
        {160, 50},
        {180, 70}
    };
    int i;
    
    for(i = 0;i < 3;i++){
        printf("身長=%dcm, 体重=%dkg\n", heightWeight[i][0], heightWeight[i][1]);
    }
    
    return(0);
}
