/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:24:00 by throdrig          #+#    #+#             */
/*   Updated: 2021/05/28 01:34:51 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>

/* 
** Libs Part 1 -- Libc functions
*/

void	*ft_memset(void *str, int c, size_t n);								// Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.
void	ft_bzero(void *str, size_t n);										// Erases the data in the n bytes of the memory starting at the location pointed to by str, by writing zeros (bytes containing '\0') to that area.
void	*ft_memcpy(void *dest, const void *src, size_t n);					// Copies n characters from memory area src to memory area dest.
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);			// Copies bytes from memory area src into dest, stopping after the first occurrence of c has been copied, or after n bytes have been copied, whichever comes first.
void	*ft_memmove(void *dest, const void *src, size_t n);					// Copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().
void	*ft_memchr(const void *str, int c, size_t n);						// Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
int		ft_memcmp(const void *str1, const void *str2, size_t n);			// Compares the first n bytes of memory area str1 and memory area str2.
size_t	ft_strlen(const char *str);											// Computes the length of the string str up to, but not including the terminating null character.
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);			// Copy strings.
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);			// Concatenate strings.
char	*ft_strchr(const char *str, int c);									// Searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.
char	*ft_strrchr(const char *str, int c);								// Searches for the last occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);	// Find the first occurrence of find in s, where the search is limited to the first slen characters of s.
int		ft_strncmp(const char *str1, const char *str2, size_t n);			// Compares at most the first n bytes of str1 and str2.
int		ft_atoi(const char *str);											// Converts the string argument str to an integer (type int).
int		ft_isalpha(int c);													// Checks if the passed character is alphabetic.
int		ft_isdigit(int c);													// Checks if the passed character is a decimal digit character. Decimal digits are (numbers) − 0 1 2 3 4 5 6 7 8 9.
int		ft_isalnum(int c);													// Checks if the passed character is alphanumeric.
int		ft_isascii(int c);													// Checks if the passed character is ascii (in the range 0 to 127).
int		ft_isprint(int c);													// Checks if the passed character is a printable character or not.
int		ft_toupper(int c);													// Convert a lowercase character to uppercase.
int		ft_tolower(int c);													// Convert a uppercase character to lowercase.

void	*ft_calloc(size_t nitems, size_t size);								// Allocates the requested memory and returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory to zero where as calloc sets allocated memory to zero.
char	*ft_strdup(const char *s);											// Duplicate a string


/* 
** Libs Part 2 -- Additional functions
*/

char	*ft_substr(char const *s, unsigned int start, size_t len);			// Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. 
char	*ft_strjoin(char const *s1, char const *s2);						// Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
char	*ft_strtrim(char const *s1, char const *set);						// Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
char	**ft_split(char const *s, char c);									// Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.
char	*ft_itoa(int n);													// Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));			// Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.
void	ft_putchar_fd(char c, int fd);										// Outputs the character ’c’ to the given file descriptor.
void	ft_putstr_fd(char *s, int fd);										// Outputs the string ’s’ to the given file descriptor.
void	ft_putendl_fd(char *s, int fd);										// Outputs the string ’s’ to the given file descriptor, followed by a newline.
void	ft_putnbr_fd(int n, int fd);										// Outputs the integer ’n’ to the given file descriptor.



#endif