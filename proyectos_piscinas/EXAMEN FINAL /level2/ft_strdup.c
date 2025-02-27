#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *ft_strdup(char *src)
{
	int i = 0;
	char *s;

	while (str[i] != '\0')
		i++; 
	if (!(s = (char *)malloc(sizeof(char) * (i+1)))
		return (NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		s[i] = src[i]; 
		i--;
	}
	return (s);
}

int main()
{
	char a[] = "hola"; 
	printf("%s", strdup(a));
}