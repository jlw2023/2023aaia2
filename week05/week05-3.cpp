#include <stdio.h>
int main()
{
    for(int i=0; i<10; i++){
        printf("i是%d", i);
    }
    printf("\n");
    for(int i=1; i<=9; i++){
        printf("i是%d", i);
    }
    printf("\n");
    for(int i = 9-1; i>=0; i--){
        printf("i是%d", i);
    }
}
