//
//  main.c
//  0718_07_tillzero
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int zandaka = 1000;
    int x;
    
    while(zandaka > 0){
        printf("x? ");
        scanf("%d", &x);
        
        if(x == 0){
            break;
        }else{
            zandaka -= x;
            printf("残高: %d\n", zandaka);
        }
    }
    
    printf("取引終了\n");
    
    return 0;
}
