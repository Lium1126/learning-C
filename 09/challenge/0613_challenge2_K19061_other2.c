//
//  0613_challenge2_other2.c
//  prg2019
//
//  Created by k19061kk on 2019/06/13.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    char ch;
    int ans;
    int temp = 0;
    
    printf("equation? ");
    
    //1つ目の数字をansに格納
    ch = getchar();
    while(ch != '+' && ch != '-' && ch != '='){
        if('0' <= ch && ch <= '9'){
            temp *= 10;
            temp += (ch - '0');
        }
        ch = getchar();
    }
    ans = temp;
    
    //2つ目以降の式の計算
    /*-------------------------+
     演算子を見つけるたびに次の演算子
     があらわれるまでの数字を求め、
     ansに足す、もしくは引く
     +-------------------------*/
    while(ch != '='){
        if(ch == '+'){
            ch = getchar();
            temp = 0;
            while(ch != '+' && ch != '-' && ch != '='){
                if('0' <= ch && ch <= '9'){
                    temp *= 10;
                    temp += (ch - '0');
                }
                ch = getchar();
            }
            ans += temp;
        }
        
        else if(ch == '-'){
            ch = getchar();
            temp = 0;
            while(ch != '+' && ch != '-' && ch != '='){
                if('0' <= ch && ch <= '9'){
                    temp *= 10;
                    temp += (ch - '0');
                }
                ch = getchar();
            }
            ans -= temp;
        }
        
        if(ch != '+' && ch != '-' && ch != '='){
            ch = getchar();
        }
    }
    
    printf("answer: %d\n", ans);
    
    return(0);
}
