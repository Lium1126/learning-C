//
//  main.c
//  0718_06_calcWhile
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int sum = 0;
    
    printf("n? ");
    scanf("%d", &n);
    
    printf("1から%dまでの和は", n);
    while(n > 0){
        sum += n;
        n--;
    }
    printf("%dです.\n", sum);
    
    return 0;
}
