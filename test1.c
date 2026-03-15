/*前置處理區*/
#include <stdio.h> //引用函式庫，就是一堆別人已經寫好的功能
#include <stdlib.h>
#define homework "第一次作業" //定義字串

/*全域變數宣告區*/
char *student;              //宣告字元指標變數
char content[] = "自我介紹\nthis is a self introduction information...\n";  //宣告字元陣列(未宣告大小)並給值
char reason[201] = "purpose to study information management system reason is ... fdadsfaasdfadfsadfaf fdsafdsfasdfasdfadsf fdsafsdfasfda fdad faasdfadfsadfaf fdsafdsfasdfasdfadsf fdsafsdfasfda dadsfaasdfadfsadfaf fdsafdsfasdfasdfadsf fdsafsdfasfda dsfasdfasdfadf fdsafdsfasdfas fdsafdsfsdf fdsafdfa";  //宣告字元陣列(有宣告大小)並給值

/*程式起始執行區*/
int main(int argc, char *argv[])
{
/*函數區域變數宣告區*/
int year = 101;            //宣告整數變數並給值
float ver = 1.1;           //宣告浮點數變數並給值
char times;                //宣告字元變數不給值

/*程式執行內容*/
if (argc == 4)
{
student = argv[1];    //指標變數指向該字串起始位置
year = atoi(argv[2]); //字串轉整數
ver = atof(argv[3]);  //字串轉浮點數
}
else
{
fprintf(stderr, "Number of parameters is incorrect\n");
//stderr 與 stdout 稍有不同
exit(1);  //結束程式將正數1值傳回給作業系統
}

printf("請輸入列印次數:");
scanf("%c", &times);
printf("%d",times);
while(++times-12)
   printf("我是嘉大資管第%-5d級\t", year);
printf("%s %s\t版本 {%4.4f}\n\n", student, homework, ver);
printf("\\自我介紹\\\n%s\n", content);
printf("\"讀資管系的目的\"\n%s\n",reason);
}
