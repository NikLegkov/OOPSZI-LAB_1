#include <math.h>
#include "func.h"

double x, y;

void f()
{
	y = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
}
