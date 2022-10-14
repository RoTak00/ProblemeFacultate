#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	
	printf("> a << 3: %d\n", a << 3);
	printf("> a >> 4: %d\n", a >> 2);
	
	int bsh10 = (1 << 1) | (1 << 3);
	printf("> bsh10: %d\n", bsh10);
	printf("> a * 10: %d\n", a * bsh10);
}