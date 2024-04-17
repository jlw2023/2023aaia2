///要了解字串與陣列的關係
#include <stdio.h>
int main()
{

    char line[80];///一行字讀進來
    printf("請輸入一行英文:\n,有空格沒關係");
    gets(line);
    printf("這行字是:%s\n", line);
    printf("請再輸入一行英文:\n");
    scanf("%s", line);
    printf("這行字是:%s\n", line);
}
