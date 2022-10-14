#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char inttohex(int n)
{
	if(n >= 0 && n <= 9)
	{
		return '0' + n;
	}
	if(n >= 10 && n <= 15)
	{
		return 'A' + n - 10;
	}
}

int hextoint(char c)
{
	c = toupper(c);
	
	if(c >= 'A' && c <= 'F')
	{
		return c - 'A' + 10;
	}
	if(c >= '0' && c <= '9')
	{
		return c - '0';
	}
}
int main(int argc, char* argv[])
{
	char bin[1024] = "";
	char hex[256] = "";
	
	if(argc != 2)
	{
		printf("> Utilizeaza flag-ul -b (bin to hex) sau -h (hex to bin)\n");
		return 0;
	}
	if(strcmp(argv[1], "-b") != 0 && strcmp(argv[1], "-h") != 0)
	{
		printf("> Utilizeaza flag-ul -b (bin to hex) sau -h (hex to bin)\n");
		return 0;
	}
	
	
	if(strcmp(argv[1], "-b") == 0)
	{
		scanf("%s", bin);
		
		int index = 0;
		int res = 0;
		int pow = 1;
		for(int i = strlen(bin) - 1; i >= 0; --i)
		{
			int val = bin[i] - '0';
			res += val * pow;
			pow *= 2;
			
			index += 1;
			if(index % 4 == 0 || i == 0)
			{
				char hexc = inttohex(res);
				strcpy(hex + 1, hex);
				hex[0] = hexc;
				
				res = 0;
				pow = 1;
			}
		}
		
		printf("> %s\n", hex);
		return 0;
	}
	
	if(strcmp(argv[1], "-h") == 0)
	{
		scanf("%s", hex);
		
		for(int i = strlen(hex) - 1; i >= 0; --i)
		{
			int val = hextoint(hex[i]);
			//printf("> %d\n", val);
			
			char binval[5] = "0000";
			int it = 3;
			while(val)
			{
				binval[it--] = val % 2 + '0';
				val /= 2;
			}
			//printf("> %s\n", binval);
			
			strcpy(bin + 4, bin);
			strncpy(bin, binval, 4);
		}
		
		printf("> %s\n", bin);
		return 0;
		
	}
	
	
}