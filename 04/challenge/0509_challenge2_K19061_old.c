//
//  0509_challenge2_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
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
    int SumOfNum;    // 鶴と亀の匹数の合計
    int SumOfLeg;    // 鶴と亀の足の数の合計
    
    int NumOfTurtle; // 亀の匹数
    int NumOfCrane;  // 鶴の羽数
    
    printf("鶴と亀の合計は? ");
    scanf("%d", &SumOfNum);
    printf("足の本数は? ");
    scanf("%d", &SumOfLeg);
    
    
    NumOfTurtle = (SumOfLeg - SumOfNum * 2) / 2;
    NumOfCrane = SumOfNum - NumOfTurtle;
    
    if(SumOfLeg % 2 == 1 || SumOfLeg < 2 * SumOfNum || SumOfLeg > 4 * SumOfNum){   // 足の数が不適当
        printf("そのような組み合わせはありません。\n");
    }else if(NumOfTurtle < 0 || NumOfCrane < 0){                         // 解が負数
        printf("そのような組み合わせはありません。\n");
    }else{
        printf("鶴は %d 羽、亀は %d 匹です。\n", NumOfCrane, NumOfTurtle);
    }
    
    return(0);
}
