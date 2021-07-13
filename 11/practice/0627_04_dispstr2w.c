//
//  0627_04_dispstr2w.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char array[11];
    int i;
    int len = 0;
    
    printf("入力（10文字以内）: ");
    scanf("%s", array);
    
    i = 0;
    while(array[i] != '\0'){
        putchar(array[i]);
        putchar('\n');
        i++;
    }
    
    return(0);
}
