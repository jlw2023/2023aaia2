#include <stdio.h>
#include <string.h>///�n�ϥ� �r�ꪺ�禡
int main()
{

    char line[100];
    printf("�п�J�@��r��,���n���Ů�,�̫���浲����J");

    scanf("%s", line);
    int N = strlen(line);
    printf("�r�ꪺ���׬O%d\n", N);///�d�X�r�����string lentgh
    ///strcpy(a, "Hello"); �r�����
    ///strcat(a, b); �r�굲�X ��k��b ���쥪��a ���᭱
    ///strcmp(a, b); �r����(�v�r�����,�ݽ֤���j
}
