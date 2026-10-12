#include <stdio.h>
#include <locale.h>
int main() {
	double x, y, c;
	scanf_s("%lf %lf %lf", &x, &y, &c);
	setlocale(LC_ALL, ".UTF8");
	if (-1 < x && x < 1) {
		printf("%lf\n", x);
	}
	if (-1 < y && y< 1) {
		printf("%lf\n", y);
	}
	if (-1 < c && c< 1) {
		printf("%lf\n", c);
	}
	system("pause");
	return 0;
}