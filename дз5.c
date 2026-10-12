#define  _CRT_SECURE_NO_DEPRECATE 
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
#include <locale.h>
double chis (double x, double y) {
	return pow(y +  pow(x - 1, 1. / 3),1./4);
}
double znam (double x, double y, double z) {
	return fabs(x - y)*(pow(sin(z), 2) + tan(z));
}
double otvet(double x, double y, double z) {
	return  chis(x, y) / znam(x, y, z);
}
int main() {
	double x,y,z;
	scanf("%lf %lf %lf", &x, &y, &z);
	setlocale(LC_ALL, ".UTF8");
	printf("Числа: х=%lf\nу=%lf\nz=%lf\n", x, y, z);
	printf("Ответ:%.3lf\n", otvet(x, y, z));
	system("pause");
	return 0;
}