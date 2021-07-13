//
//  0627_issue1_k19061.c
//  prg2019
//
//  Created by k19061kk on 2019/06/25.
//

/*---------------------------------------+
 プログラミング及び演習I 第11回
 課題1
 回文(英字)を判定するプログラムを作成せよ
   -文字列は10文字までとする
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char str[11];     // 回文か判定する対象の文字列
    int i;            // カウンタ変数
    int len = 0;      // str[]の文字数
    int flag = 1;     // 回文かどうかを表すフラグ
                      // 1:回文である 0:回文でない
    
    
    /*---入力---*/
    printf("input（10文字以下）: ");
    scanf("%s", str);
    
    /*---str[]の文字数を求める---*/
    for(i = 0;str[i] != '\0';i++){
        len++;
    }
    
    /*---回文かどうか判定---*/
    for(i = 0;i < len / 2 && flag == 1;i++){
        if(str[i] != str[len - 1 - i]){
            flag = 0;
        }
    }
    
    /*---出力---*/
    if(flag == 1){
        printf("回文OK\n");
    }else{
        printf("回文NG\n");
    }
    
    return(0);
}
