#include <stdio.h>
#include <stdlib.h>


/*
 문제 (정올 615 : 구조체 - 자가진단3)
 
 두 명의 이름과 국어, 영어 점수를 입력받아 과목별 점수의 평균을 구하여 출력하는 프로그램을 작성해 보시오.

 (이름은 20자 이하이고 평균의 소수점 이하는 버림한다.)
 */


struct school {
    char name[20];
    int korea, english;
};

int main() {
    struct school p[2];  // 구조체 배열 사용
    scanf("%s %d %d", p[0].name, &p[0].korea, &p[0].english);
    scanf("%s %d %d", p[1].name, &p[1].korea, &p[1].english);
    
    printf("%s %d %d\n", p[0].name, p[0].korea, p[0].english);
    printf("%s %d %d\n", p[1].name, p[1].korea, p[1].english);
    printf("avg %d %d\n", (p[0].korea + p[1].korea) / 2, (p[0].english + p[1].english) / 2);
    
    
    
    return 0;
}