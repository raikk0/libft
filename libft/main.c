/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:22:48 by throdrig          #+#    #+#             */
/*   Updated: 2021/06/02 23:32:51 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <limits.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void print_elements(char *array, int size)
{
  int i;
  printf ("Elements : ");
  for (i = 0; i < size; i++) {
    printf ("%c, ", array[i]);
  }
  printf ("\n");
}

char f(unsigned int i, char c)
{
	return (ft_toupper(c + (i-i)));
}

int main (void){

	//printf("%ld", ft_strlen("abç"));
	// char c = 'a';
	//printf("%i", ft_isalpha(c));
	//printf("%i", ft_isdigit(c));
	//printf("%i", ft_isascii(c));
	// //printf("foi? %i", ft_isalnum(c));
	// printf("isprintable: %i (%i | %c)", ft_isprint(c), c, c);
	//  printf("%c -> %c\n", c, ft_toupper(c));
	//printf("%c -> %c\n", c, ft_tolower(c));
	
	//// _PARTE 1
	///: ft_atoi.c
	/*

	printf("\n:: ft_atoi.c :: \n\n");

	char a[] = " 42\n3teste";
	char b[] = "+4886";
	char c[] = "+47+5";
	char d[] = "-47-5";
	char e[] = " n-234c1";
	char f[] = "  1	92a234";

	printf("(a) atoi:: %d\n", atoi(a));
	printf("(a) ft_atoi:: %d\n\n", ft_atoi(a));

	printf("(b) atoi:: %d\n", atoi(b));
	printf("(b) ft_atoi:: %d\n\n", ft_atoi(b));

	printf("(c) atoi:: %d\n", atoi(c));
	printf("(c) ft_atoi:: %d\n\n", ft_atoi(c));

	printf("(d) atoi:: %d\n", atoi(d));
	printf("(d) ft_atoi:: %d\n\n", ft_atoi(d));

	printf("(e) atoi:: %d\n", atoi(e));
	printf("(e) ft_atoi:: %d\n\n", ft_atoi(e));

	printf("(f) atoi:: %d\n", atoi(f));
	printf("(f) ft_atoi:: %d\n\n", ft_atoi(f));

	*/
	///: ft_strncmp.c
	/*
	
	printf("\n:: ft_strncmp.c :: \n\n");

	char a1[] = "salut";
	char a2[] = "";
	char b1[] = "abcdefgh";
	char b2[] = "abcdwxyz";
	char c1[] = "zyxbcdefgh";
	char c2[] = "abcdwxyz";

	printf("(a) strncmp:: %d\n", strncmp(a1, a2, 5));
	printf("(a) ft_strncmp:: %d\n\n", ft_strncmp(a1, a2, 5));

	printf("(b) strncmp:: %d\n", strncmp(b1, b2, 4));
	printf("(b) ft_strncmp:: %d\n\n", ft_strncmp(b1, b2, 4));

	printf("(c) strncmp:: %d\n", strncmp(c1, c2, 0));
	printf("(c) ft_strncmp:: %d\n\n", ft_strncmp(c1, c2, 0));
	
	*/
	///: ft_strnstr.c
	/*

	printf("\n:: ft_strnstr.c :: \n\n");
	
	
	const char *largestring = "lorem ipsum dolor sit amet";
	const char *smallstring = "ipsum";
	char *ptr;
	char *ft_ptr;

	ptr = strnstr(largestring, smallstring, 30);
	ft_ptr = ft_strnstr(largestring, smallstring, 30);

	printf("%s \n%s", ptr, ft_ptr);
	
	*/
	///: ft_strchr.c
	/*
	
	printf("\n:: ft_strchr.c :: \n\n");

	const char *s = "bonjour";

	printf("strrch: %s\n", strchr(s, '\0'));
	printf("ft_strrch: %s\n", ft_strchr(s, '\0'));
	
	*/
	///: ft_strrchr.c
	/*

	const char *s = "Abacate";

	printf("strrch: %s\n", strrchr(s, 'A'));
	printf("ft_strrch: %s\n", ft_strrchr(s, 'A'));
	
	*/
	///: ft_strlcat.c
	/*
	char	*dest;
	dest = (char *)malloc(sizeof(*dest) * 15);

	memset(dest, 'r', 15);
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dest, 15);
	*/
	/*
	
	printf("\n:: ft_strlcat.c :: \n");

	char a[] = "casa";
	char b[] = " amor";

	int size_1 = sizeof(a) + sizeof(b);
    char buffer_1[size_1];

	char c[] = "casa";
	char d[] = " amor";

	int size_2 = sizeof(c) + sizeof(d);
    char buffer_2[size_2];
	
	int i;

	
	strcpy(buffer_1, a);
	strcpy(buffer_2, c);
	printf("__________\n\n[strlcat] buffer1[%i]: ", size_1);
	i = 0;
	while(buffer_1[i] != '\0') {printf("%c", buffer_1[i]); i++;}
	printf("|\n[ft_strlcat] buffer2[%i]: ", size_2);
	i = 0;
	while(buffer_2[i] != '\0') {printf("%c", buffer_2[i]); i++;}
	printf("|\n");
		
	printf("\n\n¨¨¨¨¨¨¨¨¨¨¨¨¨¨");
	printf("\n[strlcat] %ld |", strlcat(buffer_1, b, size_1));
	printf("%s|\n", buffer_1);

	printf("[ft_strlcat] %ld |", ft_strlcat(buffer_2, d, size_2));
	printf("%s|\n", buffer_2);
	printf("\n¨¨¨¨¨¨¨¨¨¨¨¨¨¨");

	printf("\n\n[strlcat] buffer1[%i]: ", size_1);
	i = 0;
	while(buffer_1[i] != '\0') {printf("%c", buffer_1[i]); i++;}
	printf("|\n[ft_strlcat] buffer2[%i]: ", size_2);
	i = 0;
	while(buffer_2[i] != '\0') {printf("%c", buffer_2[i]); i++;}
	printf("|\n\n__________");

	*/
	///: ft_strlcpy.c
	/*
	char b[] = "lorem ipsum";

	int size_1 = ft_strlen(b);
    char buffer_1[size_1];

	
	char d[] = "lorem ipsum";

	int size_2 = ft_strlen(d);
    char buffer_2[size_2];

	int i;

	printf("\n:: strlcpy.c :: \n_____\n");
	printf("strlcpy: %ld\n", strlcpy(buffer_1, b, 3));
	printf("ft_strlcpy: %ld\n", ft_strlcpy(buffer_2, d, 3));

	printf("\n_____\n\nbuffer1[%i]: ", size_1);
	i = 0;
	while(buffer_1[i] != '\0') {printf("%c", buffer_1[i]); i++;}
	printf("|\nbuffer2[%i]: ", size_2);
	i = 0;
	while(buffer_2[i] != '\0') {printf("%c", buffer_2[i]); i++;}
	printf("|\n");

	*/
	/*printf("\n\n_____\n\n");
	i = -100;
	while(i < 100)
	{
		if(i == '0')
			printf(" ||%i|| ", i);
		printf("%c ", buffer_1[i]);
		i++;
	}*/

	///: ft_bzero.c
	/*
	void	*mem;
	int		len;

	len = 5;
	mem = malloc(sizeof(*mem) * len);


	ft_bzero(mem, sizeof(*mem));

	free(mem);

	*/

	///: ft_calloc.c
	/*
	int i, n;
	int *a;

	n = 2;

	a = (int*)ft_calloc(n, sizeof(int));
	a[0] = 7;
	a[1] = 9;

	for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }

	*/

	///: ft_memcpy.c
	/*
	char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	print_elements(c_array, sizeof(c_array));
	printf("After memcpy()\n");
	memcpy((void *)&c_array[5], (void *)&c_array[3], 5);
	print_elements(c_array, sizeof(c_array));

	printf("\n| ---- \n");
	char b_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	print_elements(b_array, sizeof(b_array));
	printf("After ft_memcpy()\n");
	ft_memcpy((void *)&b_array[5], (void *)&b_array[3], 5);
	print_elements(b_array, sizeof(b_array));

	*/
	///: ft_memccpy.c
	/*

	void	*mem;
	void	*dest;
	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 20);
	dest = memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("%s | %s", (char *)dest, (char *)mem);

	void	*memb;
	void	*destb;
	if (!(memb = malloc(sizeof(*memb) * 30)))
		return (0);
	memset(memb, 'j', 20);
	destb = ft_memccpy(memb, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
	printf("\n%s | %s", (char *)destb, (char *)memb);
	
	*/
	///: ft_memchr.c
	/*

	const char *str;
	const char *strb;
	str = memchr("bonjour", 'j', 4);
	strb = ft_memchr("bonjour", 'j', 4);

	printf("%s\n", str);
	printf("%s", strb);

	*/
	/*
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s", (char *)ft_memchr(tab, -1, 7));*/
	///: ft_memcmp.c
	/*

	printf("%i\n", memcmp("salut", "salut", 5));
	printf("%i\n\n", ft_memcmp("salut", "salut", 5));

	printf("%i\n", memcmp("t\200", "t\0", 2));
	printf("%i\n\n", ft_memcmp("t\200", "t\0", 2));

	printf("%i\n", memcmp("testss", "test", 5));
	printf("%i\n\n", ft_memcmp("testss", "test", 5));

	printf("%i\n", memcmp("test", "tEst", 4));
	printf("%i\n\n", ft_memcmp("test", "tEst", 4));

	printf("%i\n", memcmp("", "test", 4));
	printf("%i\n\n", ft_memcmp("", "test", 4));

	printf("%i\n", memcmp("test", "", 4));
	printf("%i\n\n", ft_memcmp("test", "", 4));

	printf("%i\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%i\n\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));

	printf("%i\n", memcmp("abcdefgh", "abcdwxyz", 6));
	printf("%i\n\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));

	printf("%i\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("%i\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));


	*/
	///: ft_memmove.c
	/*

	char	src[] = "lorem ipsum dolor sit amet";
	char	dest[] = "orem ipsum dolor sit amet";
	char	*ret;

	ret = memmove(src, dest, 8);

	printf("%s\n", ret);

	char	src2[] = "lorem ipsum dolor sit amet";
	char	*dest2 = src2 + 1;
	char	*ret2;

	ret2 = ft_memmove(src2, dest2, 8);

	printf("%s\n", ret2);

	*/
	///: ft_strndup.c
	/*
	char s[] = "farofa";
	char *d;
	char *d2;

	d = strdup(s);
	d2 = ft_strdup(s);

	printf("%s | %s", d, d2);

	*/
	///: ft_memset.c
	/*
	char s1[] = "Testando essa parada";
	char s2[] = "Testando essa parada";

	printf("%s\n", (char *)memset(s1, '*', 4));
	printf("%s\n", (char *)ft_memset(s2, '*', 4));

	*/

	
	




	
	//// _PARTE 2
	///: ft_putnbr_fd.c
	/*
	
	ft_putnbr_fd(42, 1);

	*/
	///: ft_putendl_fd.c
	/*

	char s[] = "testando";

	ft_putendl_fd(s, 1);

	*/
	///: ft_putstr_fd.c
	/*
	char s[] = "testando";

	ft_putstr_fd(s, 1);
	
	*/
	///: ft_putchar_fd.c
	/*

	char c = 'r';

	ft_putchar_fd(c, 1);

	*/
	///: ft_strmapi.c
	/*
	char t[] = "LoReM iPsUm";
	
	printf("%s", ft_strmapi(t, &f));
	*/
	///: ft_itoa.c
	
	int		len;
	char *str;
	len = 0;
	
	str = ft_itoa(-2147483648);

	while(str[len])
		len++;

	write(1, str, len);
		
	

	///: ft_split.c
	/*
	char **ret2;
	//ret2 = ft_split("          ", ' ');
	ret2 = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("%s", ret2[0]);
	*/
	
	///: ft_strjoin.c
	/*
	char *str1 = "cebola ";
	char *str2 = "roxa";

	printf("%s", ft_strjoin(str1, str2));
	*/

	///: ft_strtrim.c
	/*char	*strtrim;
	char s1[] = "lorem ipsum dolor sit amet";
	
	strtrim = ft_strtrim(s1, "te");
	ft_print_result(strtrim);*/
	/*
	char str[] = "batata g ";

	printf("%s", ft_strtrim(str, "g"));
	*/
	///: ft_substr.c
	/*
	char *s1 = "testando essa bagaça";
	printf("%s", ft_substr(s1, 7, 0));
	*/

	// #TESTES
	/*
	char *str[] = {"97","ð","abc\0def","3","4"};
	// void *dst;
	int i = 0;
	int c = 0;
	int strlen;
	if(str){
		strlen = sizeof(str)/sizeof(char *);
		printf("sizeof(str): %d\n", sizeof(str));
		printf("sizeof(char): %d\n", sizeof(char *));
		printf("strlen: %d\n", strlen);
		
		while(i < strlen)
		{
			c = 0;
			while(str[i][c] != '\0')
			{
				printf("%c ", str[i][c]);
				c++;
			}
			printf("\n");
			i++;
		}
		
	}
	*/

	// int i = 0;
	// while (i <= 127)
	// {
	// 	if(!isprint(i))
	// 	{
	// 		printf("Non-printable: %i \n", i);
	// 	}
		
	// 	i++;
	// }

	/*
	char *ptr;
	int i = 0;	

	ptr = malloc(300);

	while (i < 6)
	{
		*ptr = 'a';
		ptr++;
		i++;
	}

	int j = -500;
	while (j < 500){
		j++;
		printf(" %c ", ptr[j]);
	}

	printf("\n\n%ld", sizeof(ptr));


*/
	return 0;
}