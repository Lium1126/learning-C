//
//  0613_01_switch1.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    
    printf("n? ");
    scanf("%d", &n);
    
    switch(n){
        case 1:
            printf("AAA\n");
            break;
            
        case 2:
            printf("BBB\n");
            break;
            
        default:
            printf("Delfaultです.\n");
            break;
    }
    
    return(0);
}
