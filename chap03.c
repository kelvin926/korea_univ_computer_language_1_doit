#include <stdio.h>
#define SQUARE_METER_TO_PYEONG 0.3025
main(void){
    int width=0, height=0;
    printf_s("������ ���� : ");
    scanf_s("%d", &width);
    printf_s("������ ���� : ");
    scanf_s("%d", &height);
    int area = width*height, perimter = 2*(height+width);
    printf("���簢���� ���� = %d\n���簢���� �ѷ� = %d\n", area, perimter);
    printf("�� �� : %.1f��", perimter*SQUARE_METER_TO_PYEONG);


    return 0;
}