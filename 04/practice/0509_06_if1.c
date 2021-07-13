//
//  0509_06_if1.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a;
    
    printf("a? ");
    scanf("%d", &a);
    
    if(a < 0){
        printf("aは負の値です\n");
    }else if(a > 0){
        printf("aは正の値です\n");
    }else if(a == 0){
        printf("aは0です\n");
    }
    
    return(0);
}
