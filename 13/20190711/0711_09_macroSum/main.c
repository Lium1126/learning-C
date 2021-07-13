//
//  main.c
//  0711_08_macroSum
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define XMIN (5)
#define XMAX (15)

int main(int argc, const char * argv[]) {
    int i;
    int sum = 0;
    
    for(i = XMIN;i <= XMAX;i++){
        sum += i;
    }
    
    printf("総和 = %d\n", sum);
    
    return 0;
}
