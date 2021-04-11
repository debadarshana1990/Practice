#include <stdio.h>
void swap(char *s,char *e)
{

	char temp = *e;
	*e = *s;
	*s = temp;
}

void reverse(char *str,int len)
{
	int start = 0;
	int end = (len - 2);
	char temp;
	while(start < end)
	{
		swap(&(str[start]),&(str[end]));
		start++;
		end--;
	} 

}
int main()
{
	char string[] = "I am here";
	printf("Before String :%s\n",string);
	reverse(string,sizeof(string));
	printf("after String :%s\n",string);
	return 0;
}
