//
//  0613_challenge2_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/06/07.
//

/*---------------------------------------+
 プログラミング及び演習I 第9回
 チャレンジ課題2
 加減算の式を入力すると、その計算結果を出力する電卓
 プログラムを作成せよ
 また、2桁以上の数字入力に対応させよ
 +---------------------------------------*/

// インクルード================================================================
#include <stdio.h>
#include <string.h>

// 定義======================================================================
// define---------------------------------------------------------------
#define MAX_LEN 256                            // 加減算式の文字数の上限

// 関数宣言--------------------------------------------------------------
int isCorrectEquation(char equation[MAX_LEN]); // 加減算式が適切か判定
int calculateEquation(char equation[MAX_LEN]); // 加減算式を実際に計算

// 関数群=====================================================================
// main()関数-----------------------------------------------------------
int main(int argc, const char *argv[])
{
    char equation[MAX_LEN];                   // 入力された加減算式を格納する配列
    int ans;                                  // 計算結果を受け取る変数
    
    /*---入力---*/
    printf("equation? ");
    if(fgets(equation, MAX_LEN, stdin) == NULL){
        fprintf(stderr, "入力時にエラーが発生しました.\n");
    }
    
    /*---改行文字の削除及びバッファオーバーランの判定---*/
    if(equation[strlen(equation) - 1] == '\n'){
        equation[strlen(equation) - 1] = '\0';
    }else{
        fprintf(stderr, "加減算式が長すぎます.\n");
    }
    
    /*---出力---*/
    if(isCorrectEquation(equation) == 1){
        ans = calculateEquation(equation);
        printf("answer:%d\n", ans);
    }else{
        fprintf(stderr, "計算式が不適切です.\n");
    }
    
    return(0);
}

// その他の関数------------------------------------------------------------
/*-----------------------------------------------------+
 引数に渡された文字列が、加減算式として適切か判定する
 ここで適切な加減算式は以下の条件を満たす
    -イコールがただ1つ含まれる
    -演算子の個数が数字の個数より1少ない
    -数字,+,-,= 及び空白文字のみで構成されている
    -イコール以降は0個以上の空白文字しか存在しない
    -演算子と数が交互になっている
 関数名 isCorrectEquation()
 引数   char equation[]:適切な加減算式か判定する対象の文字列
 戻り値 1:適切な加減算式である
 0:加減算式として不適切
 +-----------------------------------------------------*/
int isCorrectEquation(char equation[MAX_LEN])
{
    int ope_cnt = 0;                          // 演算子の個数
    int num_cnt = 0;                          // 数字の個数
    int equ_cnt = 0;                          // イコールの個数
    int i = 0;                                // カウンタ変数
    int state = 1;                            // 0:1文字前が数 1:1文字前が演算子
    
    while(equation[i] != '\0'){
        if(equ_cnt == 0){
            if('0' <= equation[i] && equation[i] <= '9'){
                if(state == 1){
                    while('0' <= equation[i + 1] && equation[i + 1] <= '9'){
                        i++;
                    }
                    num_cnt++;
                    state = 0;
                }else{
                    return(0);
                }
            }else if(equation[i] == '='){
                if(state == 0){
                    equ_cnt++;
                }else{
                    return(0);
                }
            }else if(equation[i] == '+' || equation[i] == '-'){
                if(state == 0){
                    ope_cnt++;
                    state = 1;
                }else{
                    return(0);
                }
            }else if(equation[i] != ' '){
                /*-------------------------------------+
                 数字,+,-,=,空白文字のいずれにも該当しない文字
                 なので不適切な式である.よって0を返す.
                 +-------------------------------------*/
                return(0);
            }
        }else{
            if(equation[i] != ' '){
                /*-------------------------------------+
                 '='より後ろに空白文字以外の文字が存在するため
                 不適切な式である.よって0を返す.
                 +-------------------------------------*/
                return(0);
            }
        }
        
        i++;
    }
    
    if(ope_cnt == num_cnt - 1 && equ_cnt == 1){
        return(1);
    }else{
        return(0);
    }
}

/*-----------------------------------------------------+
 加減算式を計算する
 関数名 calculateEquation()
 引数   char equation[]:計算する加減算式が格納された文字配列
 戻り値 加減算式の計算結果を整数型で返す
 +-----------------------------------------------------*/
int calculateEquation(char equation[MAX_LEN])
{
    int i;                                    // カウンタ変数
    int state = 1;                            // 演算子の種類を保持する変数
                                              // 0:+ 1:-
    int ans;                                  // 計算結果を格納する変数
    int temp = 0;                             // ある項を一時的に保持する変数
    
    /*---最初の数字をansに格納---*/
    for(i = 0;equation[i] != '=';i++){
        if('0' <= equation[i] && equation[i] <= '9'){
            while('0' <= equation[i] && equation[i] <= '9'){
                temp *= 10;
                temp += (equation[i] - '0');
                i++;
            }
            ans = temp;
            break;
        }
    }
    
    /*---2つ目以降の数字を計算---*/
    while(equation[i] != '='){
        if('0' <= equation[i] && equation[i] <= '9'){
            temp = 0;
            while('0' <= equation[i] && equation[i] <= '9'){
                temp *= 10;
                temp += (equation[i] - '0');
                i++;
            }
            
            switch (state) {
                case 0:
                    ans += temp;
                    break;
                    
                case 1:
                    ans -= temp;
                    break;
                    
            }
        }else{
            switch(equation[i]){
                case '+':
                    state = 0;
                    break;
                    
                case '-':
                    state = 1;
                    break;
                    
            }
            i++;
        }
    }
    
    return(ans);
}
