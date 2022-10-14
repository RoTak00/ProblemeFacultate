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
	int a;
	scanf("%d", &a);
	
	printf("> ");
	bin(a);
	printf("\n");
}