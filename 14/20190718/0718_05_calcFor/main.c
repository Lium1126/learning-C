//
//  main.c
//  0718_05_calcFor
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int sum = 0;
    int i;
    
    printf("n? ");
    scanf("%d", &n);
    
    for(i = 1;i <= n;i++){
        sum += i;
    }
    
    printf("1から%dまでの和は%dです.\n", n, sum);
    
    return 0;
}
