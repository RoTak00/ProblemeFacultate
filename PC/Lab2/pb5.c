#include <stdio.h>

int sumcif(int x)
{
	int rez = 0;
	while(x)
	{
		rez += x % 10;
		x /= 10;
	}
	return rez;
}
int main()
{
	int n1, n2;
	scanf("%d", &n1);
	
	while(n1 != 0)
	{
		scanf("%d", &n2);
		
		if(n2 == n1 % sumcif(n1))
			printf("%d, %d\n", n1, n2);
		
		n1 = n2;
	}
	return 0;
}