#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	double x, y;

	printf("������� ���������� x: ");
	scanf("%lf", &x);

	printf("������� ���������� y: ");
	scanf("%lf", &y);

	// ����������� ������: x = 1, y = 3
	// ����� (1.5, 1) ����������� ����������� �������

	if (y >= 2 && y <= 5 && x >= -2 && x <= 3 || y >= 2 && y <= 3 && x >= 3 && x <= 5) {
		printf("����� (%.1lf, %.1lf) ����������� ����������� �������\n", x, y);
	}
	else {
		printf("����� (%.1lf, %.1lf) �� ����������� ����������� �������\n", x, y);
	}
	return 0;
}