//
//  main.c
//  0718_09_arraysum
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define ARRAY_SIZE (10)

int main(int argc, const char * argv[]) {
    int a[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum = 0;
    int i;
    
    for(i = 0;i < ARRAY_SIZE;i++){
        sum += a[i];
    }
    
    printf("総和=%d\n", sum);
    
    return 0;
}
