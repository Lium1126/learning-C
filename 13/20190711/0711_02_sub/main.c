//
//  main.c
//  0711_02_sub
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int subof(int c, int d);

int main(int argc, const char * argv[]) {
    int a = 5, b = 10;
    printf("%d - %d = %d\n", a, b, subof(a, b));
    
    return 0;
}

int subof(int c, int d){
    return(c - d);
}
