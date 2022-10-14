#include <stdio.h>


int main()
{
	int a, n;
	scanf("%d%d", &a, &n);
	
	int bit = (a >> n) & 1;
	printf("> bit %d: %d\n", n, bit);
	
	int setbit = a | (1 << n);
	printf("> setat bitul %d: %d\n", n, setbit);
	
	int rembit = a & (~(1 << n));
	printf("> sters bitul %d: %d\n", n, rembit);
	
	int compbit = a ^ (1 << n);
	printf("> complementat bitul %d: %d\n", n, compbit);
	
}