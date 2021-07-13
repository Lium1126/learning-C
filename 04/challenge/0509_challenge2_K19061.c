//
//  0509_challenge2_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/05/14.
//

/*--------------------------------------------+
 プログラミング及び演習I 第4回
 チャレンジ課題2
 鶴亀算を解くプログラムを作成せよ。
 正しい問題が与えられなかった場合は、その旨を指摘するような
 プログラムとせよ。
 +--------------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int SumOfNum;      // 鶴と亀の匹数の合計
    int SumOfLeg;      // 鶴と亀の足の数の合計
    
    int NumOfTurtle;   // 亀の匹数
    int i;             // カウンタ変数
    int flag = -1;     // 問題の組み合わせが存在するか判断するためのフラグ
    
    printf("鶴と亀の合計は? ");
    scanf("%d", &SumOfNum);
    printf("足の本数は? ");
    scanf("%d", &SumOfLeg);
    
    if(SumOfNum < 0 || SumOfLeg < 0){                   // 負の数が与えられた場合、明示的に例外処理
        printf("そのような組み合わせはありません。\n");
    }else{
        for(i = 0;i <= SumOfNum && flag == -1;i++){
            if(4 * i + 2 * (SumOfNum - i) == SumOfLeg){ // 問題を満たす亀の匹数が見つかった
                NumOfTurtle = i;
                flag = 1;
            }
        }
        
        if(flag == 1){
            printf("鶴は %d 羽、亀は %d 匹です。\n", SumOfNum - NumOfTurtle, NumOfTurtle);
        }else{
            printf("そのような組み合わせはありません。\n");
        }
    }
    
    return(0);
}
