//
//  main.c
//  0718_08_qq
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j;
    
    for(i = 1;i <= 9;i++){
        for(j = 1;j <= 9;j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    
    return 0;
}
