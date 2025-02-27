#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char i;
	char j;

	j = 'Y'; 
	i = 'z';
	while ((i >= 'a') && (j >= 'A'))
	{
		write (1, &i, 1);
		write (1, &j, 1); 
		i = i - 2; 
		j = j - 2;
	}
	return (0); 
}