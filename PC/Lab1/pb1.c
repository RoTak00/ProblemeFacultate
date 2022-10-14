#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	
	float dsq = b * b - 4 * a * c;
	
	if(dsq >= 0)
	{
		float d = sqrt(dsq);
		float x1 = (-1 * b + d) / (2 * a);
		float x2 = (-1 * b - d) / (2 * a);
		
		printf("> x1: %f, x2: %f\n", x1, x2);
	}
	else
	{
		printf("> Nu are radacini reale\n");
	}
	
	return 0;
}