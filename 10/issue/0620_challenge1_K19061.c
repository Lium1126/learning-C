//
//  0620_challenge1_K19061_other.c
//  prg2019
//
//  Created by k19061kk on 2019/06/18.
//

/*---------------------------------------+
 プログラミング及び演習I 第10回
 チャレンジ課題1
 2から100までの間の素数を全て求め、印字する
 プログラムを作成せよ
 +---------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j;                     // カウンタ変数
    int prime[101] = {};          // 素数を格納する配列
    int prime_num = 0;            // ある時点での素数の個数
    int flag;                     // 素数判定の際のフラグ
                                  // 0:判定している数は素数でない 1:判定している数は素数
    
    /*---素数生成---*/
    // 0,1は素数でないことが自明であるのでi=2以降を判定する
    for(i = 2;i <= 100;i++){
        // iについて現在確定している素数の全てについてあまりを調べる
        // あまりが0     :ある素数の倍数であるためiは素数でない
        // あまりが0でない:どの素数でも割り切れないのでiは素数
        flag = 1;
        for(j = 0;j < prime_num && flag == 1;j++){
            if(i % prime[j] == 0){
                flag = 0;
            }
        }
        
        // iを素数一覧に追加
        if(flag == 1){
            prime[prime_num] = i;
            prime_num++;
        }
    }
    
    /*---素数一覧(prime[]の内容)を表示---*/
    for(i = 0;i < prime_num;i++){
        printf("%d", prime[i]);
        
        if(i != prime_num - 1){
            printf(" ");
        }else{
            printf("\n");
        }
    }
    
    return(0);
}
