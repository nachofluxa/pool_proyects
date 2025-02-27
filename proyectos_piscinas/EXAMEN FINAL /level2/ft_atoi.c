#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int signo;
	int result;

	i = 0;
	signo = 1;
	result = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
			i++;
		if (str[i] == '-')
		{
			signo = signo *(-1);
			i++;
		}
	 	if (str[i] == '+')
			i++;
		while (str[i] >= 0 && str[i] <= 9)
		{
			result *= 10;
			result = result + (str[i] - '0');
			result = result * signo;
			i++;
		}
	}
	return (result); 
}
