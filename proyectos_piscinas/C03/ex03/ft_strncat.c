/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:55:02 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/18 12:55:42 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	while (dest[c1] != '\0')
	{
		c1++;
	}
	c2 = 0;
	while (src[c2] != '\0' && c2 < nb)
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	return (dest);
}

/*#include <string.h> 
#include <stdio.h>

#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);*/
int main(void)
{

	/*
	//ex00
		
	char *s1 = "Adios";
	char *s2 = "AdiaS";
	char *s3 = "Cuenas tardes";
	char *s4 = "\\200 asdfa";
	char *s5 = "\\201 asdfa"; 
	char *s6 = "Cuenas tardes_madrid";
//	char *s6 = 
//	char *s7 = 
//	char *s8 =

	printf("Original\n");
	printf("s1 s2: %i\n", strcmp(s1, s2));
	printf("s2 s1: %i\n", strcmp(s2, s1));
	printf("s3 s1: %i\n", strcmp(s3, s1));
	printf("s4 s5: %i\n", strcmp(s4, s5));
	printf("s6, s3: %i\n", strcmp(s6, s3));
	printf("\nFake:\n");
	printf("s1 s2: %i\n", ft_strcmp(s1, s2));
	printf("s2 s1: %i\n", ft_strcmp(s2, s1));
	printf("s3 s1: %i\n", ft_strcmp(s3, s1));
	printf("s4 s5: %i\n", ft_strcmp(s4, s5));
	printf("s6, s3: %i\n", ft_strcmp(s6, s3));
*/

	

/*

	//ex01
	//

	char *s1 = "Pepe165";
	char *s2 = "Pepe1654";
	char *s3 = "Pepe1651dasdfas";
	char *s4 = "Pepe1654dasdfas2";
	char *s5 = " 1bac";
	char *s6 = "1ba";

	printf("Original strncmp:\n");
	printf("%i\n", strncmp(s1, s2, 20));
	printf("%i\n", strncmp(s1, s2, 5));
	printf("%i\n", strncmp(s1, s2, 6));
	printf("%i\n", strncmp(s1, s2, 12));
	printf("%i\n", strncmp(s3, s6, 16));
	printf("%i\n", strncmp(s3, s4, 16));
	printf("%i\n", strncmp(s5, s6, 0));
	printf("%i\n", strncmp(s5, s6, 1));
	printf("%i\n", strncmp(s5, s6, 2));
	printf("%i\n", strncmp(s5, s6, 4));
	printf("==============\n");
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s1, s2, 20));
	printf("%i\n", ft_strncmp(s1, s2, 5));
	printf("%i\n", ft_strncmp(s1, s2, 6));
	printf("%i\n", ft_strncmp(s1, s2, 12));
	printf("%i\n", ft_strncmp(s3, s6, 16));
	printf("%i\n", ft_strncmp(s3, s4, 16));
	printf("%i\n", ft_strncmp(s5, s6, 0));
	printf("%i\n", ft_strncmp(s5, s6, 1));
	printf("%i\n", ft_strncmp(s5, s6, 2));
	printf("%i\n", ft_strncmp(s5, s6, 4));
	*/
//ex02

/*	
	char *src = "peeee";
	char *dest;
	char d[11] = "holaa";
	char *dest2;
	char d2[11] = "holaa";

	dest = d;
	dest2 = d2;
    printf("%s", strcat(dest, src));
   
	printf("\n");
	printf("%s", ft_strcat(dest2, src));
*/



//ex03
/*

    char i7[10] = "que tal1";
    char i8[] = "eo";

    printf("%s", ft_strncat(i7, i8, 1));
    printf("\n");
    char d7[10] = "que tal1";
    char d8[] = "eo";

    printf("%s", ft_strncat(d7, d8, 1));
    printf("\n");

	
    char a1[10] = "que tal1";
    char b1[] = "eo";

    printf("%s", strncat(a1, b1, 0));
    printf("\n");

    char a2[10] = "que tal1";
    char b2[] = "eo";

    printf("%s", ft_strncat(a2, b2, 0));
    printf("\n");
    
	char a3[11] = "que tal1";
    char b3[] = "eo";
    printf("%s", strncat(a3, b3, 11));
    printf("\n");
	char a4[11] = "que tal1";
    char b4[] = "eo";

	
	printf("%s", ft_strncat(a4, b4, 11));
    printf("\n");
	char d2[11] = "hola";
	char d3[] = "su";

  
	printf("%s", ft_strncat(d2, d3, 5));
    printf("\n");
	char d4[11] = "hola";
	char d5[] = "su";

	printf("%s", strncat(d4, d5, 5));
	printf("\n");

*/
//ex04
/*

	char	needle[7] = " mundo";
	char	haystack[15] = "hola mundo que";
	char	needle1[7] = "mundo";
	char	haystack1[15] = "mundo ";
	char	needle2[7] = "";
	char	haystack2[15] = "mundo ";
	char	needle3[7] = "asbd";
	char	haystack3[15] = "bs";

	printf("Original: %s\n", strstr(haystack, needle));
	printf("Fake: %s\n", ft_strstr(haystack, needle));
	printf("---\n");
	printf("Original: %s\n", strstr(haystack1, needle1));
	printf("Fake: %s\n", ft_strstr(haystack1, needle1));
	printf("---\n");
	printf("Original: %s\n", ft_strstr(haystack2, needle2));
	printf("Fake: %s\n", ft_strstr(haystack2, needle2));
	printf("---\n");
	printf("Original: %s\n", ft_strstr(haystack3, needle3));
	printf("Fake: %s\n", ft_strstr(haystack3, needle3));

	*/

//ex05	

	char	src[6] = "holas";
	char	src2[6] = "holas";
	char	dest[15] = "mundo";
	char	dest2[15] = "mundo";
	
	printf("Fake: %u\n", ft_strlcat(dest, src, 15));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 15));
	printf("Original dest: %s\n", dest2);
	printf("\n");

	printf("Fake: %u\n", ft_strlcat(dest, src, 0));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 0));
	printf("Original dest: %s\n", dest2);
	printf("\n");




	printf("Fake: %u\n", ft_strlcat(dest, src, 0));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 0));
	printf("Original dest: %s\n", dest2);
	printf("\n");

	printf("Fake: %u\n", ft_strlcat(dest, src, 15));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 15));
	printf("Original dest: %s\n", dest2);
	printf("\n");




	printf("Original: %lu\n", strlcat(dest, src, 3));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 3));
	printf("Fake dest: %s\n", dest);
	printf("\n");
	printf("Original: %lu\n", strlcat(dest, src, 4));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 4));
	printf("Fake dest: %s\n", dest);
	printf("\n");
	printf("Original: %lu\n", strlcat(dest, src, 5));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 5));
	printf("Fake dest: %s\n", dest);
	printf("\n");
	printf("Original: %lu\n", strlcat(dest, src, 7));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 7));
	printf("Fake dest: %s\n", dest);
	printf("\n");
	printf("Original: %lu\n", strlcat(dest, src, 8));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 8));
	printf("Fake dest: %s\n", dest);
	printf("\n");


}


















