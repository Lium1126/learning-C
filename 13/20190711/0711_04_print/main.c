//
//  main.c
//  0711_04_print
//
//  Created by k19061kk on 2019/07/11.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

void printFunc(void);

int main(int argc, const char * argv[]) {
    printFunc();
    return 0;
}

void printFunc(void){
    int i;
    for(i = 1;i <= 5;i++){
        printf("%d\n", i);
    }
    return;
}
