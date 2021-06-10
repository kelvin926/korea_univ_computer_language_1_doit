#include <stdio.h>
#define SQUARE_METER_TO_PYEONG 0.3025
main(void){
    int width=0, height=0;
    printf_s("가로의 길이 : ");
    scanf_s("%d", &width);
    printf_s("세로의 길이 : ");
    scanf_s("%d", &height);
    int area = width*height, perimter = 2*(height+width);
    printf("직사각형의 넓이 = %d\n직사각형의 둘레 = %d\n", area, perimter);
    printf("평 수 : %.1f평", perimter*SQUARE_METER_TO_PYEONG);


    return 0;
}