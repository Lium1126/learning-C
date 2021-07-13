//
//  0627_05_scan_rev.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char str[6];
    int i;
    
    printf("input: ");
    scanf("%s", str);
    
    for(i = strlen(str) - 1;i >= 0;i--){
        putchar(str[i]);
    }
    putchar('\n');
    
    return(0);
}
