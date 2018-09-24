/*
** init_2.c for init2 in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sun Aug  6 23:55:37 2017 maxence.fourrier
** Last update Mon Aug  7 00:10:36 2017 maxence.fourrier
*/

#include "my.h"

t_sphere	*init_sphere2()
{
  t_sphere	*sphere;

  if ((sphere = malloc(sizeof(t_sphere))) == NULL)
    return (NULL);
  sphere->center = init_vec(SCREEN_WIDTH / 3, SCREEN_HEIGHT / 2.3, 50);
  sphere->radius = 90.0;
  sphere->color = init_color(0, 255, 0, 255);
  return (sphere);
}

t_sphere	*init_sphere3()
{
  t_sphere	*sphere;

  if ((sphere = malloc(sizeof(t_sphere))) == NULL)
    return (NULL);
  sphere->center = init_vec(SCREEN_WIDTH / 1.5, SCREEN_HEIGHT / 1.4, 50);
  sphere->radius = 100.0;
  sphere->color = init_color(0, 0, 255, 255);
  return (sphere);
}
