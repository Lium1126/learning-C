//
//  0613_challenge2_K19061_other.c
//  prg2019
//
//  Created by k19061kk on 2019/06/13.
//

/*---------------------------------------+
 プログラミング及び演習I 第9回
 チャレンジ課題2
 加減算の式を入力すると、その計算結果を出力する電卓
 プログラムを作成せよ
 また、2桁以上の数字入力に対応させよ
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[]){
    char ch;          // 入力を読み込む文字変数
    int ans = 0;      // 計算結果を格納する変数
    int temp;         // 数字を一時的に保持する変数
    int state = 0;    // 加算するか減算するか判断するための変数
                      // 0:+ 1:-
    
    printf("equation? ");
    
    while((ch = getchar()) != '='){
        if('0' <= ch && ch <= '9'){      // 今見ている文字が数字
            /*---数字をtempに格納---*/
            temp = (ch - '0');
            ch = getchar();
            while('0' <= ch && ch <= '9'){
                temp *= 10;
                temp += (ch - '0');
                ch = getchar();
            }
            
            switch(state){
                case 0:
                    ans += temp;
                    break;
                    
                case 1:
                    ans -= temp;
                    break;
            }
        }
        
        if(ch == '+'){                   // 今見ている文字が'+'
            state = 0;
        }
        
        if(ch == '-'){                   // 今見ている文字が'-'
            state = 1;
        }
        
        if(ch == '='){                   // 今見ている文字が'='(式の終了)
            break;
        }
    }
    
    printf("answer: %d\n", ans);
    
    return(0);
}
