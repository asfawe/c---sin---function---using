#include <stdio.h>
#include <math.h>
// sin() 함수가 선언되어 있는 헤더 파일 math.h를 포함합니다. 

// sin() 함수의 원형은 다음과 같습니다.

// double sin(double x);  

void main(void)
{
	double x;
	
	x = sin(1);
	// 1라디안에 대한 사인 값을 구합니다. 참고로 360°는 2π라디안입니다.  
	
	printf("sin(1) : %g \n", x);
}

// 코사인과 탄젠트에 대한 값을 구하려면 다음과 같이 사용하세요. 

// x = cos(1);
// x = tan(1);