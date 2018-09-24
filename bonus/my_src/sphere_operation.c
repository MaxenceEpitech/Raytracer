/*
** sphere_operation.c for sphere_operation.c in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Sat Aug  5 21:05:36 2017 maxence.fourrier
** Last update Sun Aug  6 01:09:35 2017 maxence.fourrier
*/

#include <math.h>
#include "my.h"

sfVector3f	normalize_sphere(t_sphere *sphere, sfVector3f vec)
{
  sfVector3f	ret;

  ret = sub_vec(vec, sphere->center);
  return (div_vec(ret, sphere->radius));
}
