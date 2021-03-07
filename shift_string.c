#include <stdio.h>

int isAlphabet(char c)
{
	if( ((c <= 'Z') && (c >= 'A')) || ((c >= '0') && (c <= '9')) )
	{
		return 1;
	}
	else
	{
		return 0;
	}
} 

int main()
{
	char str[50] = "12**AB34^^^3**";
	int i = 0,j = 0;
	printf("before :string : %s\n",str);
	
	while('\0' != str[i])
	{     
		if(isAlphabet(str[i]))
		{
			str[j] = str[i];
			j++;
			
		}
		else
		{
			str[j] = str[i+1];
			if(isAlphabet(str[j]))
			{
				j++;
			}
			if(isAlphabet(str[i+1]))
			{
				i++;
			}
			
		}
		i++;		
	}
	str[j] = '\0';
	printf("after :string : %s\n",str);
	return 0;
}
 
