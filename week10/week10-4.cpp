#include <stdio.h>
int z = 100;
void myFunction(){
    int x = 20;
    printf("myFunction()�̪�x: %d z: %d\n", x, z);
    printf("�b���}��,�����x�Mz���]��0\n");
    x = 0;
    z = 0;
}
int main()
{
    int x = 10;
    printf("main():%d\n", x, z);
    myFunction();
    printf("main()�̪�x:%d z::%d\n", x, z);
}
