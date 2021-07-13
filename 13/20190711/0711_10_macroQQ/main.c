//
//  main.c
//  0711_10_macroQQ
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define Q 9

int main(int argc, const char * argv[]) {
    int i, j;
    
    for(i = 1;i <= Q;i++){
        for(j = 1;j <= Q;j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    
    return 0;
}
