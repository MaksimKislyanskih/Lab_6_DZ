#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	double x, y;

	printf("Введите координату x: ");
	scanf("%lf", &x);

	printf("Введите координату y: ");
	scanf("%lf", &y);

	// Контрольный пример: x = 1, y = 3
	// Точка (1.5, 1) принадлежит закрашенной области

	if (y >= 2 && y <= 5 && x >= -2 && x <= 3 || y >= 2 && y <= 3 && x >= 3 && x <= 5) {
		printf("Точка (%.1lf, %.1lf) принадлежит закрашенной области\n", x, y);
	}
	else {
		printf("Точка (%.1lf, %.1lf) не принадлежит закрашенной области\n", x, y);
	}
	return 0;
}