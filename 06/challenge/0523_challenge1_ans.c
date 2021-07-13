//
//  0523_challenge1_ans.c
//  prg2019
//
//  Created by k19061kk on 2019/05/30.
//

#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n;
    int num = 0;
    int i;
    
    printf("n? ");
    scanf("%d", &n);
    
    for(i = 1;i <= n;i++){
        if(n % i == 0){
            num++;
        }
    }
    
    if(num == 2){
        printf("%dは素数です\n", n);
    }else{
        printf("%dは素数ではありません\n", n);
    }
    
    return(0);
}
