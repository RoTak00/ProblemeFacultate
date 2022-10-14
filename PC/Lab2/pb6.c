#include <stdio.h>

int main()
{
	int p;
	scanf("%d", &p);
	
	for(int i = 1; i <= p - 2; ++i)
		for(int j = 1; j <= p - i - 1; ++j)
		{
			int k = p - i - j;
			
			if(i + j > k && i + k > j && j + k > i)
				printf("%d, %d, %d\n", i, j, k);
		}
	return 0;
}