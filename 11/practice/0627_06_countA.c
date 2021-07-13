//
//  0627_06_countA.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char array[11];
    int i;
    int cnt = 0;
    
    printf("input（10文字以下）: ");
    scanf("%s", array);
    
    for(i = 0;array[i] != '\0';i++){
        if(array[i] == 'a'){
            cnt++;
        }
    }
    
    printf("aの数は%dです\n", cnt);
    
    return(0);
}
