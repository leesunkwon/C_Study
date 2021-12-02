#include <stdio.h>
#include <stdlib.h>


/*
 문제 (정올 616 구조체 - 자가진단4)
 
 삼각형의 세 꼭지점의 정수 좌표를 입력받아 삼각형의 무게중심의 실수 좌표를 구하여

 소수 첫째자리까지 출력하는 프로그램을 작성하시오.
 */

struct num {
    double x, y;
};

int main() {
    struct num p[3];
    double re, re1;
    scanf("%lf %lf %lf %lf %lf %lf", &p[0].x, &p[0].y, &p[1].x, &p[1].y, &p[2].x, &p[2].y);
    re = (p[0].x + p[1].x + p[2].x) / 3;
    re1 = (p[0].y + p[1].y + p[2].y) / 3;
    
    printf("(%.1lf, %.1lf)", re, re1);
    
    return 0;
}