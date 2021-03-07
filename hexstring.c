#include <stdio.h>

int main()
{
	int num = 0xAB;
	int str;
	while(num != 0)
	{
		str = num % 16;
		str = (str > 9)? (str-10) + 'a' : str + '0'; 
		num = num /16;
		printf("%d ",str);
	}

	return 0;
}
