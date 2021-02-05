#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void){
   printf("おみくじプログラムでおみくじをしますか？\n");
   printf("YESは1を、NOの場合は他の数字を入力して下さい\n");

   String answer;

   scanf("%s",answer);

   int i = atoi(answer);

   if(i==1){

       printf("%dが入力されたためおみくじを始めます!\n",i);

       srand((unsigned)time(0UL));

       int num = rand() % 7 + 1 ;

       switch(num){
           case 1 :
           printf("大吉\n");
           break;

           case 2 :
           printf("中吉\n");
           break;

           case 3 :
           printf("小吉\n");
           break;

           case 4 :
           printf("吉\n");
           break;

           case 5 :
           printf("末吉\n");
           break;

           case 6 :
           printf("凶\n");
           break;

           case 7 :
           printf("大凶\n");
           break;
       }
   }
   else{
       printf("%dが入力されたためおみくじをやめます\n",i);
   }
   return 0;
}
