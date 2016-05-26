#include <stdio.h>
#include <math.h>

int resh(double a, double b, double c, double *d, double *x1, double *x2)
{
	*d = b * b - 4 * a * c;
	if (a == 0)
		return -1;

	if (*d < 0)
		return 0;
	else if (*d == 0)
	{
		*x1 = -b / (2 * a);
		return 1;
	}
	else if (*d > 0)
	{
		*x1 = (-b + sqrt(*d)) / (2 * a);
		*x2 = (-b - sqrt(*d)) / (2 * a);
		return 2;
	}
}
