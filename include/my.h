/*
** my.h for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:24:29 2017 Antoine Stempfer
** Last update Thu Oct  5 22:10:19 2017 Antoine Stempfer
*/

#ifndef _MY_H_
# define _MY_H_

# include <unistd.h>
# include <stdlib.h>

/*
**	string
*/
void	*my_memchr(const void *str, int c, size_t n);
int	my_memcmp(const void *str1, const void *str2, size_t n);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memset(void *str, int c, size_t n);
size_t	my_strlen(const char *str);
size_t	my_strnlen(const char *str, size_t n);
char	*my_strcat(char *dest, const char *src);
char	*my_strncat(char *dest, const char *src, size_t n);
char	*my_strchr(const char *str, int c);
int	my_strcmp(const char *str1, const char *str2);
int	my_strncmp(const char *str1, const char *str2, size_t n);
char	*my_strcpy(char *dest, const char *src);
char	*my_strncpy(char *dest, const char *src, size_t n);

/*
**	ctype
*/
#define	_MY_CONTROL_		1
#define	_MY_SPACE_		2
#define	_MY_BLANK_		4
#define	_MY_PUNCT_		8
#define	_MY_DIGIT_		16
#define	_MY_HEX_		32
#define	_MY_UPPER_		64
#define	_MY_LOWER_		128
#define _MY_SPACE_P_CONTROL_	3
#define _MY_SPACE_P_BLANK_	6
#define _MY_DIGIT_P_HEX_	48
#define _MY_UPPER_P_HEX_	96
#define _MY_LOWER_P_HEX_	160
extern const unsigned short    	my_ctype[257];
extern const unsigned short	*my_pctype;

int				my_isalpha(int c);
int				my_isupper(int c);
int				my_islower(int c);
int				my_isdigit(int c);
int				my_isxdigit(int c);
int				my_isspace(int c);
int				my_ispunct(int c);
int				my_isalnum(int c);
int				my_isprint(int c);
int				my_isgraph(int c);
int				my_iscntrl(int c);

/*
**	stdlib
*/
double			my_atof(const char *str);
int			my_atoi(const char *str);
long int		my_atol(const char *str);
double			my_strtod(const char *str, char **endptr);
long int		my_strtol(const char *str, char **endptr, int base);
unsigned long int	my_strtoul(const char *str, char **endptr, int base);
void			*my_calloc(size_t size);

/*
**	stdio
*/
size_t	my_fputc(char c, int fd);
size_t	my_putchar(char c);
size_t	my_putc(char c);
size_t	my_fputs(const char *s, int fd);
size_t	my_puts(const char *s);

/*
**	linked lists
*/

typedef struct		s_llnode
{
  struct s_llnode	*next;
  void			*data;
}			t_llnode;

typedef struct		s_list
{
  t_llnode		*head;
  t_llnode		*current;
  t_llnode		*tail;
  int			size;
}			t_list;

t_list			*my_list_create(void);
void			my_list_free(t_list *list);
void			my_list_destroy(t_list *list);
int			my_list_add_head(t_list *list, void *data);
int			my_list_add_tail(t_list *list, void *data);
void			*my_list_pop_head(t_list *list);
void			*my_list_pop_tail(t_list *list);
void			*my_list_get(t_list *list, int index);

#endif
