//
//  0627_03_dispstr1.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char array[] = "abcde";
    int i;
    int len = 0;
    
    printf("一文字ずつ印字:\n");
    for (i = 0;array[i] != '\0';i++) {
        printf("%c\n", array[i]);
    }
    
    return(0);
}
