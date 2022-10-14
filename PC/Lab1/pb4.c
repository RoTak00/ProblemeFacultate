#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	printf(a & 1 ? "> Impar\n" : "> Par\n");
}