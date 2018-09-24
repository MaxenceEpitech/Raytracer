/*
** sphere.c for sphere in /home/maxence.fourrier/Documents/Project_C/raytracer1/src
** 
** Made by maxence.fourrier
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Wed Aug  2 10:16:55 2017 maxence.fourrier
** Last update Sun Aug  6 22:54:32 2017 maxence.fourrier
*/

#include <math.h>
#include "raytracer.h"

sfVector3f	get_normal_sphere(sfVector3f intersection_point)
{
  sfVector3f	ret;
  double	nb;

  nb = sqrt(intersection_point.x * intersection_point.x
	    + intersection_point.y * intersection_point.y
	    + intersection_point.z * intersection_point.z);
  if (nb == 0)
    return (intersection_point);
  ret.x = intersection_point.x / nb;
  ret.y = intersection_point.y / nb;
  ret.z = intersection_point.z / nb;
  return (ret);
}

float		intersect_sphere(sfVector3f eye_pos,
				 sfVector3f dir_vector, float radius)
{
  double	x;
  double	y;
  double	z;

  x = (eye_pos.x * dir_vector.x + eye_pos.y * dir_vector.y
    + eye_pos.z * dir_vector.z) * 2;
  y = eye_pos.x * eye_pos.x + eye_pos.y * eye_pos.y
    + eye_pos.z * eye_pos.z;
  y -= (radius * radius);
  if ((z = (x * x) - y * 4) < 0)
    return (-1);
  z = sqrt(z);
  if (-x - z < 0 || -x + z < 0)
    return (-1);
  if (-x - z < -x + z)
    return (-x - z);
  else
    return (-x + z);
}
