//
//  main.c
//  0711_07_macroTest
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define NUM (10)

int main(int argc, const char * argv[]) {
    int i;
    int sum = 0;
    
    for(i = 1;i <= NUM;i++){
        sum += i;
    }
    
    printf("総和 = %d\n", sum);
    
    return 0;
}
