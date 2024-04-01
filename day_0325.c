#define _CRT_SECURE_NO_WARNINGS
#define TAX_RATE 0.2
#include <stdio.h>
int main(void) {

	//Q3
	int x, y, z;

	x = 10;
	y = 20;

	printf("x = %d, y = %d", x, y);

	z = x;
	x = y;
	y = z;

	printf("\n x = %d, y = %d", x, y);
	
	//Q8
	printf("\n ------------- \n아스키코드를 입력하세요 : ");
	int a;
	scanf("%d", &a);
	printf("문자 : %c", a);
	return 0;
}