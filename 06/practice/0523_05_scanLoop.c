//
//  0523_05_scanLoop.c
//  prg2019
//
//  Created by k19061kk on 2019/05/23.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int input;
    
    for(i = 1;i <= 5;i++){
        printf("a? ");
        scanf("%d", &input);
        
        printf("%d: %d\n", i, input);
    }
    
    return(0);
}
