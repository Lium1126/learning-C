//
//  0613_challenge1_K19061_other.c
//  prg2019
//
//  Created by k19061kk on 2019/06/13.
//

/*---------------------------------------+
 プログラミング及び演習I 第9回
 チャレンジ課題1
 加減算の式を入力すると、その計算結果を出力する電卓
 プログラムを作成せよ
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[]){
    char ch;          // 入力を読み込む文字変数
    int ans = 0;      // 計算結果を格納する変数
    int state = 0;    // 加算をするか減算をするか判断するための変数
                      // 0:+ 1:-
    
    printf("equation? ");
    
    while((ch = getchar()) != '='){
        if('0' <= ch && ch <= '9'){      // 今見ている文字が数字
            switch(state){
                case 0:
                    ans += (ch - '0');
                    break;
                    
                case 1:
                    ans -= (ch - '0');
                    break;
            }
        }else if(ch == '+'){             // 今見ている文字が'+'
            state = 0;
        }else if(ch == '-'){             // 今見ている文字が'-'
            state = 1;
        }
    }
    
    printf("answer: %d\n", ans);
    
    return(0);
}
