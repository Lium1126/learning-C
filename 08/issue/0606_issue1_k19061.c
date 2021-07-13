//
//  0606_issue1_k19061.c
//  prg2019
//
//  Created by k19061kk on 2019/06/06.
//

/*---------------------------------------+
 プログラミング及び演習I 第8回
 課題1
 銀行と財布のどちらかの残高が0以下になるまで、
 お金をやりとりしたら残高を出力するプログラムを作成
 せよ。
 -銀行と財布の初期残高は1000円ずつとする
 -引き出す金額を入力したらそれぞれの残高を表示
 -0を入力したら取引終了
 -負の値を入力したら銀行に預金する
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int wallet = 1000;    // 財布の残高
    int bank = 1000;      // 銀行の残高
    int x;                // 取引する金額
    
    while(wallet > 0 && bank > 0){
        printf("x? ");
        scanf("%d", &x);

        wallet += x;
        bank -= x;
        
        if(x == 0){
            printf("取引終了\n");
            break;
        }
        
        printf("銀行: %d 財布: %d\n", bank, wallet);
    }
    
    return(0);
}
