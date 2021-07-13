//
//  0627_challenge1_K19061_other.c
//  prg2019
//
//  Created by k19061kk on 2019/06/26.
//

/*--------------------------------------------------+
 プログラミング及び演習I 第11回
 チャレンジ課題1
 検索対象文に対して、入力した検索語があるかどうかを調べて、その
 単語位置を印字するプログラムを作成せよ
   -スペース,ピリオド,カンマは単語とみなさない(単語区切り)
 +-------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char target[256];      // 検索語を格納する文字配列
    char words[256][256];  // 単語ごとに格納する二次元配列
    int wordCnt = 0;       // 単語の個数をカウントする変数
    int i, j;              // ループカウンタ
    int cnt;               // 検索対象文の中にある検索語個数をカウントする変数
    char str[] = "we hold these truths to be self-evident, that all men are created equal, that they are endowed by their creator with certain unalienable rights, that among these are life, liberty and the pursuit of happiness.";       // 検索対象文
    
    /*---入力---*/
    printf("検索する単語を入力してください: ");
    scanf("%s", target);
    
    /*---検索対象文を単語ごとに区切りwords[][]に格納---*/
    for(i = 0;str[i] != '\0';i += j){
        for(j = 0;str[i + j] != '\0';j++){
            // 単語の区切り(空白,カンマ,ピリオド)を見つけたら直近の単語をwords[][]にコピー
            if(str[i + j] == ' ' || str[i + j] == ',' || str[i + j] == '.'){
                str[i + j] = '\0';
                strcpy(words[wordCnt], str + i);
                wordCnt++;
                
                // 単語の区切りが連続している間は読み飛ばし
                j++;
                while(str[i + j] == ' ' || str[i + j] == ',' || str[i + j] == '.'){
                    j++;
                }
                break;
            }
        }
    }
    
    /*---検索語をwords[][]の中から探索しつつ出力および見つけた個数をカウント---*/
    for(i = 0, cnt = 0;i < wordCnt;i++){
        if(strcmp(words[i], target) == 0){
            printf("検索語は%d単語目です\n", i + 1);
            cnt++;
        }
    }
    
    /*---検索語が含まれていなかった場合の出力---*/
    if(cnt == 0){
        printf("検索語は含まれていません\n");
    }
    
    return(0);
}
