//
//  main.c
//  0718_11_heightWeight
//
//  Created by k19061kk on 2019/07/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int human[3][2] = {
        {170, 80},
        {160, 50},
        {180, 70}
    };
    int i, j;
    
    for(i = 0;i < 3;i++){
        printf("%d人目の身長と体重は ", i + 1);
        for(j = 0;j < 2;j++){
            printf("%d ", human[i][j]);
        }
        printf("です\n");
    }
    
    return 0;
}
