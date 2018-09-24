/*
** my.h for include in /home/Max/Documents/include
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sat May 13 10:23:04 2017 fourrier maxence
** Last update Wed Aug  9 10:04:03 2017 maxence.fourrier
*/

#ifndef _MY_H_
# define _MY_H_

/*      __________ ________________________ __________
**
**                        INCLUDES
**      __________ ________________________ __________
*/

# include <stdlib.h>
# include <unistd.h>
# include <SFML/Graphics.h>
# include <SFML/Audio.h>
# include <SFML/Window.h>

/*      __________ ________________________ __________
**
**                        DEFINES
**      __________ ________________________ __________
*/

# define SCREEN_WIDTH   1024
# define SCREEN_HEIGHT  576
# define SCREEN_NAME	"Raytracer 1 :D"

# define SPEED		5

/*
**		     __ Error Message __
*/

# define OPEN_MSG	"Open Error.\n"

# define READ_MSG	"Read Error.\n"

# define MALLOC_MSG	"Malloc Error.\n"

/*
**	             __ Returns Values __
*/

# define SUCCESS	0

# define ERROR		84

/*
**                       __ TypeDef __
*/

typedef struct		s_list
{
  char			*data;
  struct s_list		*next;
}			t_list;

typedef struct		s_my_framebuffer
{
  sfUint8		*pixels;
  int			width;
  int			height;
}			t_my_framebuffer;

typedef struct		s_graph
{
  sfRenderWindow	*window;
  t_my_framebuffer	*framebuffer;
  sfTexture		*texture;
  sfSprite		*sprite;
}                       t_graph;

typedef struct		s_sphere
{
  sfVector3f		center;
  double		radius;
  sfColor		color;
}			t_sphere;

typedef t_sphere t_light;

typedef struct		s_ray
{
  sfVector3f		origin;
  sfVector3f		direction;
  double		nb;
}			t_ray;

typedef struct		s_all
{
  int			rotation;
  int			color;
  int			time;
  sfVector3f		pos;
  sfText		*text;
  sfFont		*font;
  t_graph		*graph;
  t_sphere		*sphere;
  t_sphere		*sphere2;
  t_sphere		*sphere3;
  t_sphere		*light;
  t_ray			*ray;
}			t_all;

/*      __________ ________________________ __________
**
**                       Raytracer 1
**      __________ ________________________ __________
*/

/*
**                       __ raytracer.c __
*/
int		raytracer();

/*
**                       __ init.c __
*/
t_all		*init_all();
t_graph		*init_graph();
t_sphere	*init_sphere();
t_sphere	*init_light();
t_ray		*init_ray();

/*
**                       __ init.c __
*/
t_sphere	*init_sphere2();
t_sphere	*init_sphere3();

/*
**                       __ clear_ressource.c __
*/
int		clear_ressource(t_all *, int);

/*
**                       __ draw.c __
*/
sfColor		create_color(sfColor, sfColor, double);
void		draw_sphere(t_all *, int, int, t_sphere *);
int		draw(t_all *);

/*
**                       __ sphere_operation.c __
*/
sfVector3f	normalize_sphere(t_sphere *, sfVector3f);

/*
**                       __ vec_operation.c __
*/
sfVector3f	add_vec(sfVector3f, sfVector3f);
sfVector3f	sub_vec(sfVector3f, sfVector3f);
sfVector3f	mult_vec(sfVector3f, double);
sfVector3f	div_vec(sfVector3f, double);
sfVector3f	normalize_vec(sfVector3f);

/*
**                       __ operation.c __
*/
double		square(double);
double		dot(sfVector3f, sfVector3f);

/*
**                       __ utils.c __
*/
void		clear_screen(t_all *);
int		has_intersect(t_sphere *, t_ray *);
sfVector3f	init_vec(double, double, double);
sfColor		init_color(int, int, int, int);

/*
**                       __ move.c __
*/
void		change_red(t_all *);
void		change_green(t_all *);
void		change_blue(t_all *);
void		rotation_light(t_all *);
void		light_move(t_all *);

/*
**                       __ text.c __
*/
sfText		*init_text(sfFont *font);
int		draw_text(t_all *all);

/*      __________ ________________________ __________
**
**                    LIBRARY #GRAPHIC
**      __________ ________________________ __________
*/

sfUint8			*create_pixel_buffer(int width, int height);
sfRenderWindow		*create_window(char *name, int width, int height);
t_my_framebuffer	*my_framebuffer_create(int width, int height);
void			my_put_pixel(t_my_framebuffer *framebuffer,
                                     int y, int x, sfColor color);
void			refresh(t_graph *graph, sfText *text);

/*      __________ ________________________ __________
**
**                        LIBRARY #C
**      __________ ________________________ __________
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
