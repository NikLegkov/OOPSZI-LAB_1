#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;

	x = 5;
	y = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
