#include <stdio.h>
int main(void)
{
    char name[3];
    int height;
    int weight;
    printf_s("���� : ");
    scanf_s("%s", name);
    printf_s("%s", name);
    printf("Ű�� ������ : ");
    scanf_s("%d %d", &height, &weight);
    printf("%06.8d\n", weight+height);
    printf("%x, %X\n %o", height, height, height);
    return 0;
}