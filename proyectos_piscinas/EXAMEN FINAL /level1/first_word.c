#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i; 

	i = 0; 
	if (argc < 1)
		write (1, "\n", 1); 
	while ((argv[1][i] == ' ') || (argv[1][i] == '\t'))
		i++; 
	while (argv[1][i] != '\0' && ((argv[1][i] != ' ') && (argv[1][i] != '\t')))
	{
		write (1, &argv[1][i], 1); 
		i++; 
	}
	return (0); 
}