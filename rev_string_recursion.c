#include <stdio.h>

void rev(char *str)
{
	if(*str)
	{
		rev(str + 1);
		printf("%c",*str);
	}
}

int main()
{
	char string[] = " I am here";
	rev(string);
	return 0;
}
