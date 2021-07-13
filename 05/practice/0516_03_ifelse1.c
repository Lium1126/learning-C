//
//  0516_03_ifelse1.c
//  prg2019
//
//  Created by k19061kk on 2019/05/16.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;
    
    printf("a? ");
    scanf("%d", &a);
    
    if(a >= 0){
        printf("aは正の値もしくは0です\n");
    }else{
        printf("aは負の値です\n");
    }
    
    printf("計算終了\n");
    
    return(0);
}
