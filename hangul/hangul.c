#include <stdio.h>

int main()
{
    printf("문자열 : ");

    char a[256];
    scanf("%s", a);

    printf(" \" %s \" 를 입력\n", a);

    return 0;
}