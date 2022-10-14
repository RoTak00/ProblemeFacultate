#include <stdio.h>

void bin(int n)
{
	if(n)
	{
		bin(n >> 1);
		printf("%d", n & 1);
	}
}

int main()
{
	int x, y, n, p;
	scanf("%d%d%d%d", &x, &y, &n, &p);
	
	printf("> x in bin: ");
	bin(x);
	printf("\n");
	
	printf("> y in bin: ");
	bin(y);
	printf("\n");
	
	for(int i = 0; i < n; ++i)
	{
		int bit = (y >> i) & 1;
		int pos = p - n + i;
		
		if(bit == 1)
		{
			x = x | (1 << pos);
		}
		else if(bit == 0)
		{
			x = x & (~(1 << pos));
		}
	}
	printf("> x rez in bin: ");
	bin(x);
	printf("\n");
	printf("> %d\n", x);
	
	
}