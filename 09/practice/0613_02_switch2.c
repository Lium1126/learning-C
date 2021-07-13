//
//  0613_02_switch2.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char c;
    
    printf("text? ");
    
    while((c = getchar()) != '\n'){
        switch(c){
            case ' ':
                putchar('\n');
                break;
                
            default:
                printf("%c", c);
                break;
        }
    }
    putchar('\n');
    
    return(0);
}
