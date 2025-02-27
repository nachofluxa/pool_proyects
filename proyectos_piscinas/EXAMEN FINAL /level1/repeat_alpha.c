#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	if (argc != 2)
		write (1, "\n", 1); 
	else
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				j = argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				j = argv[1][i] - 'A';
			else 
				write (1, &argv[1][i], 1);
			while (j >= 0)
			{
				write (1, &argv[1][i], 1); 
				j--; 
			}
			i++;
		}
		write (1, "\n", 1);
}