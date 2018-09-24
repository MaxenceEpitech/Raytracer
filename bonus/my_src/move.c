/*
** move.c for move in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sun Aug  6 01:26:44 2017 maxence.fourrier
** Last update Sun Aug  6 23:51:54 2017 maxence.fourrier
*/

#include <time.h>
#include <math.h>
#include "my.h"

void		change_red(t_all *all)
{
  if (all->sphere->color.r >= 254)
    all->pos.x = 0;
  if (all->sphere->color.r <= 100)
    all->pos.x = 1;
  if (all->pos.x == 1)
    all->sphere->color.r++;
  else
    all->sphere->color.r--;
}

void		change_green(t_all *all)
{
  if (all->sphere->color.g >= 250)
    all->pos.y = 0;
  if (all->sphere->color.g <= 1)
    all->pos.y = 1;
  if (all->pos.y == 1)
    all->sphere->color.g += 3;
  else
    all->sphere->color.g--;
}

void		change_blue(t_all *all)
{
  if (all->sphere->color.b >= 250)
    all->pos.z = 0;
  if (all->sphere->color.b <= 1)
    all->pos.z = 1;
  if (all->pos.z == 1)
    all->sphere->color.b += 2;
  else
    all->sphere->color.b--;
}

void		rotation_light(t_all *all)
{
  sfVector3f	sphere = all->sphere->center;
  sfVector3f	light = all->light->center;
  double	rad;
  double	y;
  double	z;

  if (all->time >= 360)
    all->time = 0;
  else
    all->time += SPEED;
  rad = all->time * M_PI / 180;
  all->light->center.y = (sphere.y * cos(rad) - sphere.z * sin(rad));
  all->light->center.z = (sphere.y * sin(rad) + sphere.z * cos(rad));
}

void		light_move(t_all *all)
{
  sfEvent	event;

  if (sfKeyboard_isKeyPressed(sfKeyC))
    {
      while (sfRenderWindow_pollEvent(all->graph->window, &event)
	     || event.type != sfEvtKeyReleased || event.key.code != sfKeyC);
      all->color *= -1;
    }
  if (sfKeyboard_isKeyPressed(sfKeyR))
    {
      while (sfRenderWindow_pollEvent(all->graph->window, &event)
	     || event.type != sfEvtKeyReleased || event.key.code != sfKeyR);
      all->rotation *= -1;
    }
  if (all->color == 1)
    {
      change_red(all);
      change_green(all);
      change_blue(all);
    }
  if (all->rotation == 1)
    rotation_light(all);
}
