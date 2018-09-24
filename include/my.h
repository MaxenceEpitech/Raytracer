/*
** my.h for include in /home/Max/Documents/include
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sat May 13 10:23:04 2017 fourrier maxence
** Last update Wed Jul 26 08:07:49 2017 fourrier maxence
*/

#ifndef _MY_H_
# define _MY_H_

/*
** __ Include __
*/

# include <stdlib.h>
# include <unistd.h>

/*
** __ Define __
*/

/*
**		__ Error Message __
*/

# define OPEN_MSG	"Open error.\n"

# define READ_MSG	"Read error.\n"

# define MALLOC_MSG	"Malloc error of : "
# define MALLOC_CHAR	"char.\n"
# define MALLOC_LIST	"t_list.\n"

/*
**		__ Returns Values __
*/

# define EXIT_USAGE	84
# define EXIT_MALLOC	84
# define EXIT_READ	84
# define EXIT_OPEN	84

# define EXIT_SUCCESS	0

/*
** __ T_list __
*/

typedef struct		s_list
{
  char			*data;
  struct s_list		*next;
}			t_list;

/*
** __ Raytracer 1 __
*/

/*
** __ Lib __
*/

t_list	*my_rev_list(t_list *list);
t_list	*my_link_list(t_list *list, char *data);
t_list	*my_list_cpy(t_list *list);
int	my_list_size(t_list *begin);
int	my_list_is_empty(t_list *liste);
void	my_print_list(t_list *liste);

int	my_decimal_to_octal(int nb);
int	my_strlen(char *str);
int	my_str_who_bigger(char *s1, char *s2);
int	my_str_to_int(char *str);
int	my_strcmp(char *a, char *b);
int	my_swap(int *a, int *b);

void	my_putstr_error(char *str);
void	my_putnbr(int nb);
void	my_putchar(char a);
void	my_putstr(char *str);

char	*my_int_to_str(int nb);
char	*my_str_maj(char *str);
char	*my_decimal_to_hexa(int nb);
char	*supp_0(char *str);
char	*my_revstr(char *str);
char	*my_strcpy(char *dest, char *src);

#endif /* !__MY_H_ */
