//
//  main.c
//  0711_03_add
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

void addof(int c, int d);

int main(int argc, const char * argv[]) {
    int a = 5, b = 10;
    addof(a, b);
    return 0;
}

void addof(int c, int d){
    printf("%d + %d = %d\n", c, d, c + d);
    return;
}
