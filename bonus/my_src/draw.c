/*
** draw.c for draw in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
**
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
**
** Started on  Thu Aug  3 10:47:06 2017 maxence.fourrier
** Last update Tue Aug 29 09:27:21 2017 maxence.fourrier
*/

#include <math.h>
#include "my.h"

sfColor		create_color(sfColor c_sphere,
			     sfColor c_light, double nb)
{
  sfVector3f	v_color;
  sfVector3f	sphere;
  sfVector3f	light;
  sfColor	color;

  sphere = init_vec(c_sphere.r,
		    c_sphere.g,
		    c_sphere.b);
  light = init_vec(c_light.r,
		   c_light.g,
		   c_light.b);
  v_color = add_vec(sphere, mult_vec(light, nb));
  v_color.x = (v_color.x < 0) ? 0 : v_color.x;
  v_color.y = (v_color.y < 0) ? 0 : v_color.y;
  v_color.z = (v_color.z < 0) ? 0 : v_color.z;
  v_color.x = (v_color.x > 255) ? 255 : v_color.x;
  v_color.y = (v_color.y > 255) ? 255 : v_color.y;
  v_color.z = (v_color.z > 255) ? 255 : v_color.z;
  color = init_color(v_color.x, v_color.y, v_color.z, 255);
  return (color);
}

void		draw_sphere(t_all *all, int x, int y, t_sphere *sphere_)
{
  sfColor	color;
  double	power;
  sfVector3f	light;
  sfVector3f	sphere;

  light = sub_vec(all->light->center,
		  add_vec(all->ray->origin,
			  mult_vec(all->ray->direction,
				   all->ray->nb)));
  sphere = normalize_sphere(sphere_,
			    add_vec(all->ray->origin,
				    mult_vec(all->ray->direction,
					     all->ray->nb)));
  power = dot(normalize_vec(light), normalize_vec(sphere));
  color = create_color(sphere_->color, all->light->color, power);
  my_put_pixel(all->graph->framebuffer, x, y, color);
}

int		draw(t_all *all)
{
  int		x;
  int		y;

  y = 0;
  while (y < SCREEN_HEIGHT)
    {
      x = 0;
      while (x < SCREEN_WIDTH)
	{
	  all->ray->origin = init_vec(x, y, 0);
	  if (has_intersect(all->sphere2, all->ray))
	    draw_sphere(all, x, y, all->sphere2);
	  else if (has_intersect(all->sphere3, all->ray))
	    draw_sphere(all, x, y, all->sphere3);
	  else if (has_intersect(all->sphere, all->ray))
	    draw_sphere(all, x, y, all->sphere);
	  x++;
	}
      y++;
    }
  return (SUCCESS);
}
