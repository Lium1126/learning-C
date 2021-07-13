//
//  0516_08_nested.c
//  prg2019
//
//  Created by k19061kk on 2019/05/16.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b;
    
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);
    
    if(a > 0){
        if(b == 0){
            printf("A\n");
        }else if(b > 0){
            printf("B\n");
        }else{
            printf("C\n");
        }
    }else{
        printf("D\n");
    }
    
    return(0);
}
