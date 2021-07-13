//
//  0509_issue1_K19061.c
//  prg2019
//
//  Created by k19061kk on 2019/05/09.
//

/*--------------------------------------------+
 プログラミング及び演習I 第4回
 課題1
 身長(cm)と体重(kg)を整数値で入力すると、体重と
 標準体重の差およびBMIを実数で出力するプログラムを
 作成せよ。
 
 (参考)
    標準体重(kg): (身長(cm) - 100) * 0.9
    BMI:         体重(kg) / (身長(m) * 身長(m))
 +--------------------------------------------*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int height;            // 身長(cm)
    int weight;            // 体重(kg)
    double StandardWeight; // 標準体重(kg)
    double BMI;            // BMI
    double HeightMeters;   // 身長を(m)単位に変換する際の作業用変数
    
    do{
        printf("身長は? ");     //-----------------+
        scanf("%d", &height);  //                 |
        printf("体重は? ");     //                 +---- 身長(cm)と体重(kg)を入力
        scanf("%d", &weight);  //-----------------+
        
        if(height < 0 || weight < 0){
            printf("適切な値を入力してください。\n");
        }
    }while(height < 0 || weight < 0);
    
    StandardWeight = (double)(height - 100) * 0.9;
    HeightMeters = (double)height / 100.0;
    BMI = (double)weight / (HeightMeters * HeightMeters);
    
    printf("標準体重との差は %f kgです\n", (double)weight - StandardWeight);
    printf("BMIは %f です\n", BMI);
    
    return(0);
}
