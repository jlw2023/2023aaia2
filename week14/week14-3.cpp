#include <stdio.h>
int main()
{
    int a=5;
    ///if(a>0){///if判斷只做1次
    ///    printf("a: %d\n", a);
    ///}
    ///while(a>0){///while迴圈會一直做
     ///   printf("a:%d\n", a);
    ///}
    while(1) printf("a:1\n");///請問這行執行會印東西嗎
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(2) printf("3成立\n");
    if(999) printf("999成立\n");
    if(-1) printf("-1成立\n");
    if(-2) printf("-2成立\n");
    if(0)printf("請問0成立嗎?\n");///其他都成立 只有0不成立

}
