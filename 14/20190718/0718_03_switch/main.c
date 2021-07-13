//
//  main.c
//  0718_03_switch
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    
    printf("n? ");
    scanf("%d", &n);
    
    switch(n){
        case 1:
            printf("AAA\n");
            break;
            
        case 2:
            printf("BBB\n");
            break;
            
        default:
            printf("Defaultです.\n");
            break;
    }
    
    return 0;
}
