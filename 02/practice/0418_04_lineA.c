//
//  0418_04_lineA.c
//  prg2019
//
//  Created by k19061kk on 2019/04/18.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("    *     \n");
    printf("   / \\   \n");
    printf("  /   \\  \n");
    printf(" /-----\\ \n");
    printf("/       \\\n");
    
    /*
     '\'はエスケープシーケンスなので、普通に表示はできない。
     '\'を表示する場合、printf()に渡す文字列中で"\\"と記述する。
     */
    
    return(0);
}
