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
	printf("\n ------------- \n�ƽ�Ű�ڵ带 �Է��ϼ��� : ");
	int a;
	scanf("%d", &a);
	printf("���� : %c", a);
	return 0;
}