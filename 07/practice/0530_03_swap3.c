//
//  0530_03_swap3.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int x[3];
    int i, j;
    int temp;
    
    printf("x y z? ");
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    
    for(i = 0;i < 3 - 1;i++){
        for(j = 0;j < 3 - i - 1;j++){
            if(x[j] > x[j + 1]){
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    
    printf("x y z = ");
    for(i = 0;i < 3;i++){
        printf("%d", x[i]);
        if(i != 2){
            printf(" ");
        }else{
            printf("\n");
        }
    }
    
    return(0);
}
