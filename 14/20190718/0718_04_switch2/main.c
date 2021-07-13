//
//  main.c
//  0718_04_switch2
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    
    printf("c? ");
    c = getchar();
    
    switch(c){
        case 'L':
            printf("Left\n");
            break;
            
        case 'R':
            printf("Right\n");
            break;
            
        default:
            printf("nop\n");
            break;
    }
    
    return 0;
}
