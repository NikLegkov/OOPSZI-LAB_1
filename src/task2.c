#include <stdio.h>
#include <math.h>

double f(double x)
{
	return (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
}

int main()
{
	double x, y;

	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
