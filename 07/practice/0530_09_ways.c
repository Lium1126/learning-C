//
//  0530_09_ways.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n, x;
    int i, j, k;
    int cnt = 0;
    
    printf("n x? ");
    scanf("%d %d", &n, &x);
    
    for(i = 1;i <= n;i++){
        for(j = 1;j <= n;j++){
            for(k = 1;k <= n;k++){
                if(i + j + k == x){
                    printf("%d %d %d\n", i, j, k);
                    cnt++;
                }
            }
        }
    }
    
    printf("組み合わせの数は %d 個です\n", cnt);
    
    return(0);
}
