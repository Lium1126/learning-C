//
//  main.c
//  0718_12_string
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

#define MAX_LEN (10)

int main(int argc, const char * argv[]) {
    char str[MAX_LEN + 1];
    
    printf("入力（10文字以内）: ");
    scanf("%s", str);
    
    printf("%s\n", str);
    
    return 0;
}
