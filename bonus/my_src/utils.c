/*
** utils.c for utils in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Thu Aug  3 17:33:45 2017 maxence.fourrier
** Last update Sun Aug  6 23:46:55 2017 maxence.fourrier
*/

#include <math.h>
#include "my.h"

void		clear_screen(t_all *all)
{
  int		x;
  int		y;

  y = 0;
  while (y < SCREEN_HEIGHT)
    {
      x = 0;
      while (x < SCREEN_WIDTH)
        {
	  my_put_pixel(all->graph->framebuffer, x, y, sfBlack);
          x++;
        }
      y++;
    }
}

int		has_intersect(t_sphere *sphere, t_ray *ray)
{
  double	x;
  double	y;
  double	z;
  sfVector3f	new;

  new = sub_vec(ray->origin, sphere->center);
  x = dot(new, ray->direction) * 2;
  y = dot(new, new) - square(sphere->radius);
  if ((z = square(x) - y * 4) < 0)
    return (0);
  z = sqrt(z);
  if (-x - z < -x + z)
    ray->nb = -x - z;
  else
    ray->nb = -x + z;
  return (1);
}

sfVector3f	init_vec(double x, double y, double z)
{
  sfVector3f	vec;

  vec.x = x;
  vec.y = y;
  vec.z = z;
  return (vec);
}

sfColor		init_color(int r, int g, int b, int a)
{
  sfColor	color;

  color.r = r;
  color.g = g;
  color.b = b;
  color.a = a;
  return (color);
}
