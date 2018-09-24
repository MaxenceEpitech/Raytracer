/*
** vect.c for vect in /home/maxence.fourrier/Documents/Project_C/raytracer1/bonus/my_src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Fri Aug  4 09:42:28 2017 maxence.fourrier
** Last update Sun Aug  6 21:52:40 2017 maxence.fourrier
*/

#include <math.h>
#include "my.h"

sfVector3f	add_vec(sfVector3f a, sfVector3f b)
{
  return (init_vec(a.x + b.x,
		   a.y + b.y,
		   a.z + b.z));
}

sfVector3f	sub_vec(sfVector3f a, sfVector3f b)
{
  return (init_vec(a.x - b.x,
		   a.y - b.y,
		   a.z - b.z));
}

sfVector3f	mult_vec(sfVector3f vec, double nb)
{
  return (init_vec(vec.x * nb,
		   vec.y * nb,
		   vec.z * nb));
}

sfVector3f	div_vec(sfVector3f vec, double nb)
{
  return (init_vec(vec.x / nb,
		   vec.y / nb,
		   vec.z / nb));
}

sfVector3f	normalize_vec(sfVector3f vec)
{
  double	nb;

  nb = sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
  return (init_vec(vec.x / nb, vec.y / nb, vec.z / nb));
}
